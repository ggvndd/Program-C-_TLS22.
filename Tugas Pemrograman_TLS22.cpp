// This is a BMI Counter using the metrics systems, such as metres and kilograms!
#include <iostream>
using namespace std;

int main() {
    string gender;
    double height, weight, bodymassindex;
    cout << "This is a BMI counter, please input your body data accordingly.";
    cout << "What is your height? (in metres) \n";
    cin >> height;
    cout << "What is your body weight? (in kilograms) \n";
    cin >> weight;
    cout << "What is your gender? (female or male) \n";
    cin >> gender;
    
    bodymassindex=weight/height/height;
    cout << "You are " <<height<< " metres tall and is " <<weight<< " kilograms heavy. \n" "According to the BMI Formula, your Body Mass Index is " <<bodymassindex;
    
      if (gender == "male") {
     if (bodymassindex<18.4) {
           cout << " \n You are underweight. Please improve your daily habits including eating more healthy foods and if needed, you can consult to your local nutrition expert! cheers mate have a great day :D"; }  
        else if (18.5>bodymassindex || bodymassindex<24.9) {  
            cout << "\n You have a healthy weight. Keep this healthy weight by being active in any occassions your on and stay consistent on your diet. Remember not to eat too much junk food, peace :D"; }  
        else if (25.0>bodymassindex || bodymassindex<29.9) {
            cout << "\n You are overweight. You could use a diet to lower your BMI. You could try working out in the gym if you want to, or just try calisthenics. Please also measure your calorie intake every day :D"; } 
        else if (bodymassindex>30.0) {
            cout << "\n You are a big chungus, nah jk :D. Please take care of yourself. Try working out and consulting to your nearby nutrition expert. This is a serious health issue :D";}
    }
            
    
    if (gender == "female") {
     if (bodymassindex<18.4) {
           cout << " \n You are underweight. Please improve your daily habits including eating more healthy foods and if needed, you can consult to your local nutrition expert! cheers mate have a great day :D"; }  
        else if (18.5>bodymassindex || bodymassindex<24.0) {  
            cout << "\n You have a healthy weight. Keep this healthy weight by being active in any occassions your on and stay consistent on your diet. Remember not to eat too much junk food, peace :D"; }  
        else if (24.1>bodymassindex || bodymassindex<29.9) {
            cout << "\n You are overweight. You could use a diet to lower your BMI. You could try working out in the gym if you want to, or just try calisthenics. Please also measure your calorie intake every day :D"; } 
        else if (bodymassindex>30.0) {
            cout << "\n You are a big chungus, nah jk :D. Please take care of yourself. Try working out and consulting to your nearby nutrition expert. This is a serious health issue :D";}
    }
    
return 0;
     }