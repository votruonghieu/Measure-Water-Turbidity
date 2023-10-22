#include <stdio.h>
#include <stdlib.h>
#include <SimulatedTurbiditySensor.h>

// Khởi tạo đối tượng cảm biến turbidity
SimulatedTurbiditySensor turbiditySensor;

void setup() {
  // Khởi tạo cảm biến turbidity
  turbiditySensor.begin();
  Serial.begin(9600);
}

void loop() {
  // Đo độ trong của nước
  float turbidityValue = turbiditySensor.measureTurbidity();
  
  // In giá trị đo được lên Serial Monitor
  Serial.print("Turbidity: ");
  Serial.print(turbidityValue);
  Serial.println(" NTU (Nephelometric Turbidity Units)");
  
  delay(1000);  // Đợi 1 giây trước khi đo lại
}
