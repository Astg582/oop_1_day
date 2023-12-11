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
	
	
    char get_grade()const{
		return grade;
	}
	
    void set_grade(){
	double jsd = ((marks1 + marks2 + marks3) / 3);
        if(jsd <= 30){
		grade = 'F';
	}else if(jsd <= 50){
		grade = 'D';
	}else if(jsd <= 65){
		grade = 'C';
	}else if(jsd <= 87){
		grade = 'B';
	}else{
		grade = 'A';
	}
    }
    
    int get_ID()const{
        return studentID;
    }

    std::string get_name()const{
	    return name;
    }

    void set_ID(int id){
        studentID = id;    
    }

    void set_name(std::string n){
        if(n.length() >= 3){
		name = n;
	}else{
	throw std::invalid_argument("Error ");
	}
    }
    
    double get_marks1()const{
	return marks1;
    }
    
    double get_marks2()const{
	return marks2;
    }
   
    double get_marks3()const{
	return marks3;
    }
   
    void set_marks1(double a){
   	if(a < 0 || a > 100){
		throw std::invalid_argument("Error");
	}
        marks1 = a;
    }

    void set_marks2(double a){
        if(a < 0 || a > 100){
		throw std::invalid_argument("Error");
	}
        marks2 = a;
    }

    void set_marks3(double a){
	if(a < 0 || a > 100){
		throw std::invalid_argument("Error");
	}
        marks3 = a;
    }
};

int main(){
    Student NANA;
    NANA.set_ID(5);
    NANA.set_name("Nana");
    NANA.set_marks1(32.76); 
    NANA.set_marks2(45.12); 
    NANA.set_marks3(78.45);
    NANA.set_grade();

    std::cout << NANA.get_name() <<":  " << NANA.get_marks1() <<",  " << NANA.get_marks2() << ",  " << NANA.get_marks3()<< ",  This is a grade: "  << NANA.get_grade()  << std::endl;
}
