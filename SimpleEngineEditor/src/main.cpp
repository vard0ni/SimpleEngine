#include <iostream>
#include <memory>
#include <SimpleEngineCore/Application.hpp>

class MyApp : public SimpleEngine::Application
{
	// Logic for every game frame
	virtual void on_update() override
	{
		std::cout << "Update frame: " << frame++ << std::endl;
	}

	int frame = 0;
};

int main()
{
	// create app
	auto myApp = std::make_unique<MyApp>();

	// start app
	int returnCode = myApp->start(1024, 768, "My first App");

	std::cin.get();

	return returnCode;
}