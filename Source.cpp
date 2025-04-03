#include <iostream>

#define INDENT cout << endl;
#define RESET cout << "\033[0m";
#define RED cout << "\033[31m";
#define GREEN cout << "\033[32m";
#define YELLOW cout << "\033[33m";
#define BLUE cout << "\033[34m";
#define MAGENTA cout << "\033[35m";
#define CYAN cout << "\033[36m";
#define WHITE cout << "\033[37m";
#define BOLD cout << "\033[1m";

using namespace std;

/*
Створити глобальний (батьківський клас) на тему "Мова програмування"
Створити 5 підкласів (основні напрямки програмування)
Створити ще 5 підкласів з різними мовами та їх "фішками".
*/

class ProgrammingLanguage {
protected:
    string name;
    string type;
    string features;

public:
    
    ProgrammingLanguage(string n, string t, string f) : name(n), type(t), features(f) {}

    // Віртуальний метод для відображення інформації
    virtual void showInfo() {
        INDENT
        YELLOW
        cout << "Language: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Features: " << features << endl;
		cout << "----------------------------------------" << endl;
		RESET
    }
};

// Підклас: Процедурне програмування
class ProceduralProgramming : public ProgrammingLanguage {
public:
    ProceduralProgramming(string name) : ProgrammingLanguage(name, "Procedural", "Focuses on procedures or routines.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "This language follows a step-by-step execution flow." << endl;
    }
};

// Підклас: Об'єктно-орієнтоване програмування
class ObjectOrientedProgramming : public ProgrammingLanguage {
public:
    ObjectOrientedProgramming(string name) : ProgrammingLanguage(name, "Object-Oriented", "Uses objects and classes to structure programs.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "This language allows encapsulation, inheritance, and polymorphism." << endl;
    }
};

// Підклас: Функціональне програмування
class FunctionalProgramming : public ProgrammingLanguage {
public:
    FunctionalProgramming(string name) : ProgrammingLanguage(name, "Functional", "Emphasizes the evaluation of functions rather than changing state.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "This language focuses on immutability and first-class functions." << endl;
    }
};

// Підклас: Логічне програмування
class LogicProgramming : public ProgrammingLanguage {
public:
    LogicProgramming(string name) : ProgrammingLanguage(name, "Logic", "Uses logic and rules to perform computations.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        
        cout << "This language is based on formal logic and works with facts and rules." << endl;
       
    }
};

// Підклас: Метапрограмування
class Metaprogramming : public ProgrammingLanguage {
public:
    Metaprogramming(string name) : ProgrammingLanguage(name, "Metaprogramming", "Allows programs to treat other programs as data.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "This language allows creating programs that can modify themselves or other programs." << endl;
    }
};
















// Підклас: Мова програмування C++
class Cpp : public ProgrammingLanguage {
public:
    Cpp() : ProgrammingLanguage("C++", "Multi-paradigm", "Supports OOP, generic programming, and procedural programming.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "C++ is known for its performance, memory control, and system programming capabilities." << endl;
    }
};

// Підклас: Мова програмування Python
class Python : public ProgrammingLanguage {
public:
    Python() : ProgrammingLanguage("Python", "High-level", "Simple syntax, dynamic typing, and interpreted language.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "Python is famous for its readability and ease of use in web development, automation, and data science." << endl;
    }
};

// Підклас: Мова програмування Java
class Java : public ProgrammingLanguage {
public:
    Java() : ProgrammingLanguage("Java", "Object-Oriented", "Write once, run anywhere; strong typing, multi-threading.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "Java is widely used for large-scale enterprise applications, Android development, and web services." << endl;
    }
};

// Підклас: Мова програмування JavaScript
class JavaScript : public ProgrammingLanguage {
public:
    JavaScript() : ProgrammingLanguage("JavaScript", "High-level", "Dynamic, weakly typed, and supports event-driven programming.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "JavaScript is essential for web development, enabling interactivity in websites and web applications." << endl;
    }
};

// Підклас: Мова програмування Go
class Go : public ProgrammingLanguage {
public:
    Go() : ProgrammingLanguage("Go", "Compiled", "Concurrency support, simple syntax, and fast performance.") {}

    void showInfo() override {
        ProgrammingLanguage::showInfo();
        cout << "Go is designed for cloud computing, microservices, and scalable systems." << endl;
    }
};



int main() {
	// Створення об'єктів мов програмування
    ProgrammingLanguage* languages[10] = {
        new Cpp(),
        new Python(),
        new Java(),
        new JavaScript(),
        new Go(),
        new ProceduralProgramming("C"),
        new ObjectOrientedProgramming("C++"),
        new FunctionalProgramming("Haskell"),
        new LogicProgramming("Prolog"),
        new Metaprogramming("Lisp")
    };

	// Виведення інформації про кожну мову програмування
    for (size_t i = 0; i < 10; i++)
    {
		languages[i]->showInfo();
    }

	return 0;
}
