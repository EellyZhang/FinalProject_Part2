public GameObject cubePrefab;
Vector3 gridCubePosition, nextCubePosition;
public GameObject[,] gridCubes;
public GameObject nextCube;
float eachTurnTime, turnTimer, eachGameTime, gameTimer;
int gridCubeMaxX, gridCubeMaxY;
Color[] nextCubeColor;
Color currentNextCubeColor;
int coloredX, coloredY;
public Text nextCubeText, gameOverText;


void Start() 
{
	gridCubeMaxX = 8;
	gridCubeMaxY = 5;
	
	eachTurnTime = 2.0f;
	turnTimer = eachTurnTime;
	eachGameTime = 60.0f;
	gameTimer = eachGameTime;
	
	nextCubeColor = new Color[5];
	nextCubeColor [0] = Color.blue;
	nextCubeColor [1] = Color.green;
	nextCubeColor [2] = Color.red;
	nextCubeColor [3] = Color.yellow;
	nextCubeColor [4] = Color.magenta;
	
	for (int x = 0; x < gridCubeMaxX; x++) 
	{
		for (int y = 0; y < gridCubeMaxY; y++)
		 {
			gridCubePosition = new Vector3 [x*2, y*2, 0];
			gridCubes [x,y] = Instantiate (cubePrefab, gridCubePosition, Quaternion.identity);			
			gridCubes [x,y].GetComponent<Renderer>().material.color = Color.white;
		}
	}

	nextCubePosition = new Vector3 [x = 20, y = 10, 0];
	nextCube = Instantiate (cubePrefab, cubePosition, Quaternion.identity);
	//test this line
	NewNextCube ();

}

//set for X position, check if it is occupied, change the color there
public void GetInThereNextCube()
{
	List<coloredX> coloredXList = new List<coloredX> ();

	coloredX = Random.Range (0,gridCubeMaxX);
	if (Cubes[coloredX, coloredY].GetComponent<CubeBehavior>().isColored == false)
	{
		gridCubes[coloredX, coloredY].GetComponent<Renderer>.material.color = currentNextCubeColor;
		Cubes[coloredX, coloredY].GetComponent<CubeBehavior>().isColored = true;
	}
	else 
}


public void KeyboardInput()
{
	if (Input.GetKey(KeyCode.Alpha1) || Input.GetKey(KeyCode.Keypad1))
	{
		coloredY = 4;
		if (nextCube != null) {
		GetInThereNextCube();
		}
	}
	if (Input.GetKey(KeyCode.Alpha2) || Input.GetKey(KeyCode.Keypad2))
	{
		coloredY = 3;
		if (nextCube != null) {
			GetInThereNextCube();
		}
	}
		
	if (Input.GetKey(KeyCode.Alpha3) || Input.GetKey(KeyCode.Keypad3))
	{
		coloredY = 2;
		if (nextCube != null) {
		GetInThereNextCube();
		}
	}

	if (Input.GetKey(KeyCode.Alpha4) || Input.GetKey(KeyCode.Keypad4))
	{
		coloredY = 1;
		if (nextCube != null) {
		GetInThereNextCube();
		}
	}
	if (Input.GetKey(KeyCode.Alpha5) || Input.GetKey(KeyCode.Keypad5))
	{
		coloredY = 0;
		if (nextCube != null) {
		GetInThereNextCube();
		}
	}
}

public void NewNextCube()
{
	currentNextCubeColor = 	nextCubeColor [random.range (0,5) ];
	nextCube.GetComponent<Renderer>().material.color = currentNextCubeColor;
}

//activate the cube when click
public void Actication(gameObject selectedCube, int x, int y)
{
	if (CubeBehavior.isSelected )
}


//deactivate the cube when click on an active cube
public void Deactivation(gameObject selectedCube, int x, int y)
{

}


public void ProcessClick(gameObject selectedCube, int x, int y)
{

}


//add a UI here
void EndGame(bool win)
{
	if (win){
		Text.win = "YOU WIN!";
		print ("win");
	}
	else {
		Text.gameOverText = "GG!";
		print ("lose");
	}
}

void Update()
{
	if (Time.time < gameTimer) {

		if (Time.time > turnTimer)
		{
			NewNextCube ();


			turnTimer += eachTurnTime
		}

	}
}
