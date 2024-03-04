int result;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
result = areaRectangle(5,10);
Serial.print("Function Return : ");
Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:

}

int areaRectangle(int Hight, int Width) {
  int area = 0;
  area = Hight * Width;
  Serial.println(area);
  return area;
}

