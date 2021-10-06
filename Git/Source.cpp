#include <iostream>
using namespace std;

//Set up SDL and all subsystems.
void Init() {
	cout << "Initializing game..." << endl;
}
//Handle events function.
void HandleEvents() {
	cout << "Processing..." << endl;
}
//Update function. Process game objects.
void Update() {
	cout << "Initializing game..." << endl;
}
//Render function. Updates the window.
void Render() {
	cout << "Rendering..." << endl;
}

void Clean() {
	cout << "Cleaning..." << endl;
}

//Run Function. Contains the main game loop.
int Run() {
	
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) {//This is our game loop.
		HandleEvents();	//Input.
		Update();	//Processing
		Render();	//Output.
		cout << "\nDo you want to quit? [y/n]: ";
		cin >> input;
		if (input == 'y') {
			isRunning = false;
		}
	}
	Clean();
	return 0;
}


// main function. Entry point of every C++ program.
int main() {
	
	return Run();
}