//Created By: Carter Dishman   
//Created On: 10/24/2017      


 #include <iostream> 
 using namespace std;
 
 
 class TemperatureConverter {
     private:
        double kelvin_;
     public:
     TemperatureConverter(){
         double kelvin_ = 0;
     }
     
     TemperatureConverter(double k){
         double kelvin_ = k;
     }
     
     void SetTempFromKelvin(double k){
         double kelvin_ = k;
     }
     
     void GetTempFromKelvin(double k){
         double kelvin_ = k;
     }
     
     void SetTempFromCelsius(double c) {
            if (c < -273.15) {
                c = -273.15;
        }
        
         kelvin_ = (c + 273.15); 
     }
     
     
     void SetTempFromFahrenheit(double f){
        if (f < -459.67) {
            f = -459.67;
     }  
     
     kelvin_ = ((5 * (f -32)/9) + 273.15);
     
     }
     
     
   void PrintTemperatures(){
       cout << " The temp in Celsius is: ";
       cout << " The temp in Fahrenheit is: ";
       cout << " The temp in Kelvin is: ";
   }
     
 };
