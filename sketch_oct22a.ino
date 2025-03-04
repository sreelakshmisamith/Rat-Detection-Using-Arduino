// Define the pin numbers
const int pirPin = 2;     // PIR motion sensor output pin
const int ledPin = 3;     // LED pin

void setup() {
  // Initialize the PIR sensor pin as input
  pinMode(pirPin, INPUT);
  
  // Initialize the LED pin as output
  pinMode(ledPin, OUTPUT);
  
  // Start serial communication for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the PIR sensor output
  int motionDetected = digitalRead(pirPin);
  
  if (motionDetected == HIGH) {
    // Motion detected
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Motion detected! LED ON");
    delay(2000); // Keep LED on for 2 seconds
  } else {
    // No motion detected
    digitalWrite(ledPin, LOW);  // Turn off the LED
    Serial.println("No motion detected. LED OFF");
  }
  
  // Small delay to avoid overwhelming the serial monitor
  delay(500); // Check every 500 ms
}
