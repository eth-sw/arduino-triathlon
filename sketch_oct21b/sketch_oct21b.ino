long swimTimes;
long bikeTimes;
long runTimes;
long totalTimes;

int num;
int menuSelection;

const String names[] = {"Swim", "Bike", "Run", "Total"}; // does not change through course of program

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Menu();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

// -----------------MENU------------------------------------------

int Menu()
{
  Serial.println("");
  Serial.println("Enter 0 to enter swim details");
  Serial.println("Enter 1 to enter bike details");
  Serial.println("Enter 2 to enter run details");
  Serial.println("Enter 3 to view the total results");
  Serial.println("Please enter the value of your selection: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  num = Serial.parseInt();
  // user input required for switch case
  switch(num) { 
    case 0:
      Swim();
      break;
    case 1:
      Bike();
      break;
    case 2:
      Run();
      break;
    case 3:
      Total();
      break;
    default:
      Serial.println("NA");
  }
}

// -----------------2ND SELECTION MENU------------------------------------------
  
int menuSelect()
{
   Serial.println("Would you like to make another selection?");
   Serial.println("Enter 0 for YES or 1 for NO");
   Serial.println("");
   while (!Serial.available()) {
    //wait for user to enter value
     ;
   }
   menuSelection = Serial.parseInt();

   switch(menuSelection) {
    case 0:
      Menu();
      break;
    case 1:
      Serial.println("Okay");
      
      break;
    default:
      Serial.println("NA");
   }
}

// -----------------SWIM------------------------------------------

long Swim()
{
  Serial.println("Swim");
  Serial.print("Please enter the value for swim hours: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long swimHours = swimHours + Serial.parseInt();
  Serial.println(swimHours);

  Serial.print("Please enter the value for swim minutes: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long swimMinutes = swimMinutes + Serial.parseInt();
  Serial.println(swimMinutes);

  Serial.print("Please enter the value for swim seconds: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long swimSeconds = swimSeconds + Serial.parseInt();
  Serial.println(swimSeconds);

  swimTimes = swimHours*3600 + swimMinutes*60 + swimSeconds;
  Serial.println("Your total swim time in seconds is: ");
  Serial.println(swimTimes);
  Serial.println("");
  menuSelect();
}

// -----------------BIKE------------------------------------------

long Bike()
{
  Serial.println("Bike");
  Serial.print("Please enter the value for bike hours: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long bikeHours = Serial.parseInt();
  Serial.println(bikeHours);

  Serial.print("Please enter the value for bike minutes: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long bikeMinutes = Serial.parseInt();
  Serial.println(bikeMinutes);

  Serial.print("Please enter the value for bike seconds: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long bikeSeconds = Serial.parseInt();
  Serial.println(bikeSeconds);

  bikeTimes = bikeHours*3600 + bikeMinutes*60 + bikeSeconds;
  Serial.println("Your total bike time in seconds is: ");
  Serial.println(bikeTimes);
  Serial.println("");
  menuSelect();  
}

// -----------------RUN------------------------------------------

long Run()
{
  Serial.println("Run");
  Serial.print("Please enter the value for run hours: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long runHours = Serial.parseInt();
  Serial.println(runHours);

  Serial.print("Please enter the value for run minutes: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long runMinutes = Serial.parseInt();
  Serial.println(runMinutes);

  Serial.print("Please enter the value for run seconds: ");
  while (!Serial.available()) {
    //wait for user to enter value
    ;
  }
  long runSeconds = Serial.parseInt();
  Serial.println(runSeconds);

  runTimes = runHours*3600 + runMinutes*60 + runSeconds;
  Serial.println("Your total run time in seconds is: ");
  Serial.println(runTimes);
  Serial.println("");
  menuSelect();
}

// -----------------TOTAL------------------------------------------

long Total()
{
  totalTimes = swimTimes + bikeTimes + runTimes;
  const long times[4] = {swimTimes, bikeTimes, runTimes, totalTimes};

  
  for(long i = 0; i < 4; i++)
  {
    Serial.println(names[i]);
    Serial.println("Hours:");
    Serial.println(times[i]/3600);
    Serial.println("Minutes:");
    Serial.println((times[i]%3600)/60);
    Serial.println("Seconds:");
    Serial.println((times[i]%3600)%60);
    Serial.println("");    
  }
}
