// RTSProject.cpp: A program using the TL-Engine

#include <TL-Engine.h>	// TL-Engine include file and namespace
using namespace tle;

void main()
{
	// Create a 3D engine (using TLX engine here) and open a window for it
	I3DEngine* myEngine = New3DEngine( kTLX );
	myEngine->StartWindowed();

	// Add default folder for meshes and other media
	myEngine->AddMediaFolder( "C:\\ProgramData\\TL-Engine\\Media" );
	myEngine->AddMediaFolder( "lab\ models");
	/**** Set up your scene here ****/

	ICamera* camera = myEngine->CreateCamera( kFPS );

	IMesh* skyBoxMesh = myEngine->LoadMesh("SkyBox.x");
	IModel* skyBox = skyBoxMesh->CreateModel();
	skyBox->Scale(3.0f);

	IMesh* builderMesh = myEngine->LoadMesh("army_truck.x");
	IMesh* combatMesh = myEngine->LoadMesh("challenger.x");
	IMesh* sapperMesh = myEngine->LoadMesh("hmmwv.x");
	IMesh* treeMesh = myEngine->LoadMesh("Tree1.x");
	IMesh* missileMesh = myEngine->LoadMesh("mars.x");
	IMesh* extractorMesh = myEngine->LoadMesh("Building03.x");
	IMesh* baseMesh = myEngine->LoadMesh("Building09.x");

	// The main game loop, repeat until engine is stopped
	while (myEngine->IsRunning())
	{
		// Draw the scene
		myEngine->DrawScene();

		/**** Update your scene each frame here ****/

	}

	// Delete the 3D engine now we are finished with it
	myEngine->Delete();
}
