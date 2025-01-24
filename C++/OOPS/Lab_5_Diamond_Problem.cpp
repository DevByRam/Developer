#include <iostream>
#include <string>
using namespace std;

class VehicleComponent
{
public:
    virtual string status() = 0;
    virtual ~VehicleComponent() {}
};

class NavigationSystem : virtual public VehicleComponent
{
private:
    string destination;
    string currentPosition;

public:
    NavigationSystem() : destination("Unknown"), currentPosition("Unknown") {}

    void setDestination(const std::string &dest)
    {
        destination = dest;
    }

    void updatePosition(const std::string &position)
    {
        currentPosition = position;
    }

    std::string status() override
    {
        return "NavigationSystem: Destination - " + destination + ", Current Position - " + currentPosition;
    }
};

class SafetySystem : virtual public VehicleComponent
{
private:
    int speed;
    bool brakesActivated;
    bool airbagsDeployed;

public:
    SafetySystem() : speed(0), brakesActivated(false), airbagsDeployed(false) {}

    void setSpeed(int s)
    {
        speed = s;
    }

    void activateBrakes(bool activate)
    {
        brakesActivated = activate;
    }

    void deployAirbags(bool deploy)
    {
        airbagsDeployed = deploy;
    }

    string status() override
    {
        return "SafetySystem: Speed - " + to_string(speed) +
               ", Brakes Activated - " + (brakesActivated ? "Yes" : "No") +
               ", Airbags Deployed - " + (airbagsDeployed ? "Yes" : "No");
    }
};

class AutonomousVehicle : public NavigationSystem, public SafetySystem
{
public:
    string status() override
    {
        return NavigationSystem::status() + "\n" + SafetySystem::status();
    }
};

int main()
{
    AutonomousVehicle vehicle;
    vehicle.setDestination("The Raddison");
    vehicle.updatePosition("Jaiwilas Palace");
    vehicle.setSpeed(90);
    vehicle.activateBrakes(false);
    vehicle.deployAirbags(false);

    std::cout << vehicle.status() << std::endl;

    return 0;
}
