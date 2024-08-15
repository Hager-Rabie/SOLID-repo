  #include <iostream>
#include <string>
using namespace std;
 
class Employee {
public:
    string name;
    int age;
    string position;
    virtual ~Employee(){}
};
  class hireEmployeeservice : public Employee{
    public:
    void hireEmployee() {
        cout << "Hiring employee: " << name << endl;
    }
  };
  class  FireEmployeeservice : public Employee{
      void fireEmployee() {
        cout << "Firing employee: " << name << endl;
    }
  };
  
   class  Employeeinfo : public Employee {
    public : 
    void printDetails() {
        cout << "Name: " << name << ", Age: " << age << ", Position: " << position << endl;
    }
   };
   class  EmployeePay : public Employee {
    public:
    void calculatePay() {
        cout << "Calculating pay for: " << name << endl;
    }
   };
   class  Employeepromotion : public Employee{
    void promoteEmployee() {
        cout << "Promoting employee: " << name << endl;
    }
   };

class Manager : public Employee {
public:
    int teamSize;
    void manageTeam() {
        cout << "Managing a team of size: " << teamSize << endl;
    }
};
   class Teamadd {
    public :
    void addTeamMember() {
        cout << "Adding team member" << endl;
    }
   };
   class Teamremove  {
    public: 
    void removeTeamMember() {
        cout << "Removing team member" << endl;
    }
   };
   class Meeting  {
    public:
    void scheduleMeeting() {
        cout << "Scheduling a meeting" << endl;
    }
   };
   class Performance{
    public :
    void reviewPerformance() {
        cout << "Reviewing performance" << endl;
    }
   };

class Report {
public:
    virtual void generateReport()=0;
    virtual ~Report() {}
};
 class ReportPrint  {
    public :
    void printReport() {
        cout << "Printing report" << endl;
    }
 };
 class ReportSave  {
    void saveReport() {
        cout << "Saving report" << endl;
    }
 };
 class ReportDelete {
    public : 
    void deleteReport() {
        cout << "Deleting report" << endl;
    }
  };
  class ReportSend {
    public :
    void sendReport() {
        cout << "Sending report" << endl;
    }
  };

class PDFReport : public Report {
public:
    void generateReport() override {
        cout << "Generating PDF report with special format" << endl;
    }
};

class PayrollSystem {
public:
    void processPayroll() {
        cout << "Processing payroll" << endl;
    }
};
class Payslipgen {
    public:
    void generatePayslip() {
        cout << "Generating payslip" << endl;
    }
};
class PayslipSend{
    public : 
    void sendPayslip() {
        cout << "Sending payslip" << endl;
    }
};
  class Benefits {
    public :
    void handleEmployeeBenefits() {
        cout << "Handling employee benefits" << endl;
    }
  };
  class Taxes  {
    public :
    void handleEmployeeTaxes() {
        cout << "Handling employee taxes" << endl;
    }
  };

class Logger {
      public :
 virtual   void logInfo(string info) = 0;

};
class Error : public Logger{
    public:
    void logError(string error) {
        cout << "Logging error: " << error << endl;
    }
     void logInfo(string info) override {
        cout << "Logging info: " << info << endl;
    }

};
 class Warning : public Logger{
    public : 
    void logWarning(string warning) {
        cout << "Logging warning: " << warning << endl;
    }
     void logInfo(string info) override {
        cout << "Logging info: " << info << endl;
    }

 };

 class Debug: public Logger {
    public :
    void logDebug(string debug) {
        cout << "Logging debug: " << debug << endl;
    }
     void logInfo(string info) override {
        cout << "Logging info: " << info << endl;
    }

 };
 class Trace : public Logger{
    public :
    void logTrace(string trace) {
        cout << "Logging trace: " << trace << endl;
    }
     void logInfo(string info) override {
        cout << "Logging info: " << info << endl;
    }

 };

int main() {
    
    Employee emp;
    emp.name = "John Doe";
    emp.age = 30;
    emp.position = "Developer";
    hireEmployeeservice emp2;
    emp2.hireEmployee();
    EmployeePay emp3;
    emp3.calculatePay();

    Manager mgr;
    mgr.name = "Jane Smith";
    mgr.teamSize = 10;
    mgr.manageTeam();

    PDFReport report;
    report.generateReport();
    ReportPrint report2;
    report2.printReport();

    PayrollSystem payroll;
    payroll.processPayroll();

    Error logger;
    logger.logError("This is an error");

    return 0;
}
