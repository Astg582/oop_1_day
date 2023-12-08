#include <iostream>
#include <string>

class Student{
    private:
    int studentID; 
    std::string name;
    char grade;
    double marks1;
    double marks2;
    double marks3;

    public:

    void set_grade(){
        grade = (marks1 + marks2 + marks3) / 3;
    }
    
    int get_id()const{
        return studentID;
    }

    std::string get_name()const{
        return name;
    }

    void set_ID(int id){
        studentID = id;    
    }

    void set_name(std::string n){
        name = n;
    }
    
    void set_marks1(int a){
     if(a <= 100 && a >= 0){
            marks1 = a;
     }
    }

    void set_marks2(int a){
        marks2 = a;:wq
    }

    void set_marks3(int a){
        marks3 = a;
    }
};

int main(){
    Student NANA;
    NANA.set_Id(5);
    NANA.set_name("Nana");
    NANA.ser_marks1(100

}
