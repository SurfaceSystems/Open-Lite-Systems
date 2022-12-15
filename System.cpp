#include <sstream>
#include <iostream>
#include <string.h>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#pragma comment(lib, "Urlmon.lib")
#include <windows.h>
#include <cstdio>
#define UNICODE
#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include<dos.h>

using namespace std;
typedef string String;

enum IN {
  
    // 13 is ASCII for carriage
    // return
    IN_BACK = 8,
    IN_RET = 13
  
};

  
// Function that accepts the password
std::string takePasswdFromUser(
    char sp = '*')
{
    // Stores the password
    string passwd = "";
    char ch_ipt;
  
    // Until condition is true
    while (true) {
  
        ch_ipt = getch();
  
        // if the ch_ipt
        if (ch_ipt == IN::IN_RET) {
            cout << endl;
            return passwd;
        }
        else if (ch_ipt == IN::IN_BACK
                 && passwd.length() != 0) {
            passwd.pop_back();
  
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
  
            continue;
        }
  
        // Without using this, program
        // will crash as \b can't be
        // print in beginning of line
        else if (ch_ipt == IN::IN_BACK
                 && passwd.length() == 0) {
            continue;
        }
  
        passwd.push_back(ch_ipt);
        cout << sp;
    }
}
  

int main() {
    try {
    system("Color 0F");
    system("CLS");
    //Reset
    String ANSI_RESET = "\u001B[0m";
  //Colores de letra
    String ANSI_BLACK = "\u001B[30m";
    String ANSI_RED = "\u001B[31m";
    String ANSI_GREEN = "\u001B[32m";
    String ANSI_YELLOW = "\u001B[33m";
    String ANSI_BLUE = "\u001B[34m";
    String ANSI_PURPLE = "\u001B[35m";
    String ANSI_CYAN = "\u001B[36m";
    String ANSI_WHITE = "\u001B[37m";
  //Colores de fondo
    String ANSI_BLACK_BACKGROUND = "\u001B[40m";
    String ANSI_RED_BACKGROUND = "\u001B[41m";
    String ANSI_GREEN_BACKGROUND = "\u001B[42m";
    String ANSI_YELLOW_BACKGROUND = "\u001B[43m";
    String ANSI_BLUE_BACKGROUND = "\u001B[44m";
    String ANSI_PURPLE_BACKGROUND = "\u001B[45m";
    String ANSI_CYAN_BACKGROUND = "\u001B[46m";
    String ANSI_WHITE_BACKGROUND = "\u001B[47m";
    cout << "Open Lite Systems ";
    cout << ANSI_GREEN_BACKGROUND << ANSI_BLACK;
    cout << " 2022.12.15 NT i12 \n\n";
    cout << ANSI_RESET << ANSI_WHITE;
    static string directory = "V:/Documents";
    string files[200][2] = {{"SHUTDOWN.com", "Este archivo no se puede mostrar"}, {"RESTEART.com", "Este archivo no se puede mostrar"}};
    int arrIndex = 2;
    
    bool started = true;
    
    

    string envVariable[100][2] = {
        {
            "path",
            "V:/System33/SHUTDOWN.com;V:/System33/RESTEART.com;V:/System33/lib/"
        }
    };
    int e1 = 1;
    
    static string lastDir = "V:/Documents";
    do {
    
    cout << directory + "> ";
    string command;
    cout << ANSI_BLUE;
    getline(cin,command);
    cout << ANSI_WHITE;
    if(command.substr(0,6) == "Write ") {
        cout << command.substr(6)  + "\n";
    } else if(command.substr(0,12) == "SHUTDOWN.com") {
        system("CLS");
        system("Color 20");
        cout << "Apagando el equipo...";
        Sleep(5000);
        system("C:\\Windows\\System32\\shutdown /s /t 0");
    } else if(command.substr(0,12) == "RESTEART.com") {
        system("CLS");
        system("Color 20");
        cout << "Reiniciando el equipo...";
        Sleep(5000);
        system("C:\\Windows\\System32\\shutdown /r /t 0");

    } else if(command.substr(0,5) == ".help") {
        cout << ANSI_BLUE_BACKGROUND << ANSI_BLACK << "Bienvenido al asistente de comandos de Lite Systems.\n" << ANSI_RESET << ANSI_GREEN;
        cout << "Aqui tienes una lista de comandos utiles para usar:\nEstan organizados por el primero que se invento.\n";
        cout << "Write %Texto% << Muestra en la pantalla la variable %Texto%\n";
        cout << "SHUTDOWN.com << Apaga el equipo.\n";
        cout << "RESTEART.com << Reinicia el equipo.\n";
        cout << ".help << Muestra esta lista.\n";
        cout << "BootShutdown.boot << Cierra el sistema operativo.\n";
        cout << "nEnv %NombreDeLaVariable% << Anade una variable de entorno con el nombre de %NombreDeLaVariable% y el valor que se le asigne.\n";
        cout << ".env << Muestra todos la variables de entorno.\n";
        cout << "eEnv %TextoDeLaVariable% << Edita la variable de entorno seleccionada con el texto de %TextoDeLaVariable%.\n";
        cout << "ResteartBoot.uef << Reinicia la estancia del sistema operativo.\n";
        cout << "litver << Muestra la version del sistema operativo\n";
        cout << "openuefibootsettings << Abre la configuracion del sistema operativo.\n";
        cout << "nf %NombreDelArchivo% << Crea un archivo con el nombre de la variable %NombreDelArchivo%.\n";
        cout << "rf %NombreDelArchivo% << Lee el archivo con el nombre de la variable %NombreDelArchivo%.\n";
        cout << "V: << Muestra los datos de la unidad.\n";
        cout << "dirc << Muestra los archivos que hay en esa carpeta.\n";
        cout << "df %NombreDelArchivo% << Elimina el archivo seleccionado.\n";
        cout << "ef %NombreDelArchivo% << Edita el texto del archivo seleccionado.\n";
        cout << "gameDiceRoller << Un juego en el que tienes que adivinar un numero.\n";
        cout << "calcFileText << Calcular el contenido de dos archivos.\n";
        cout << "LiteNTOfficeVer << Comprobar la version de Lite NT Office.\n" << ANSI_WHITE;

    } else if(command == "BootShutdown.boot") {
        started = false;
        system("CLS");
    } else if(command.substr(0,4) == "nEnv") {
        try {
        e1++;
        envVariable[e1][0] = command.substr(5);
        string value;
        cout << "Inserte el valor: ";
        getline(cin >> ws, value);
        envVariable[e1][1] = value;
        cout << "La variable: " + command.substr(5) + " ahora esta asignada para las variables de entorno. \n";
        } catch (out_of_range) {
            cout << "Inserte un nombre valido.\n";
        }
    } else if(command == ".env") {
        int number = 0;
        cout << "Seleccione cual variable quieres examinar: ";
        cin >> number;
        cout << "Variable de Entorno:\nNombre:" + envVariable[number][0] + ", Valor: " + envVariable[number][1] + "\n";
    } else if(command == "eEnv") {
        int number = 0;
        cout << "Seleccione cual variable quieres editar: ";
        cin >> number;
        try {
            envVariable[number][1] += ";" + command.substr(5);
        } catch(bad_alloc) {
            cout << "Ese valor es mas grande que la cantidad de variables que hay.\n";
        } catch(out_of_range) {
            cout << "Ese valor es invalido\n"; 
        }
    } else if(command.substr(0,3) == "cd ") {
        
        
    } else if(command.substr(0,4) == "nfl ") {
        
    } else if(command == "ResteartBoot.uef") {
        system("echo ResteratingPowerShell.");
        system("cd \"c:\\Users\\Blas\\Desktop\\MyProject\\LSnt2022\\\" ; if ($?) { g++ System.cpp -o System } ; if ($?) { .\\System }");
    } else if(command == "bluscr") {
        system("CLS");
        system("Color 9F");
        cout << "  --------                   /////\n" <<
                "-----------               /////\n" <<
                "-----------             /////\n" <<
                "  --------             ||||||\n" <<
                "                       ||||||\n" <<
                "  ---------            ||||||\n" <<
                "------------             \\\\\\\\\\\n" <<
                "------------               \\\\\\\\\\\n" <<
                "  ---------                   \\\\\\\\\\";
        cout << "\nCode: " << "Critical Process Died\n";
        system("Pause");
        
        system("Color 0F");
        system("CLS");
    } else if(command == "yelscr") {
        system("CLS");
        system("Color E9");
        cout << "  --------                /////\n" <<
                "-----------              /////\n" <<
                "-----------             /////\n" <<
                "  --------             /////\n" <<
                "                      /////\n" <<
                "  ---------          /////\n" <<
                "------------        /////\n" <<
                "------------       /////\n" <<
                "  ---------       /////\n";
        cout << "\nCode: " << "Bad alloc\n";
        cout << "Prueba a poner un numero mas pequeno.\n";
        system("Pause");
        
        system("Color 0F");
        system("CLS");
    } else if(command == "litver") {
        cout << "##       ##  ########### #############\n" <<
                "##       ##      ##      ##\n" <<
                "##       ##      ##      ##\n" <<
                "##       ##      ##      #########\n" <<
                "##       ##      ##      ##\n" <<
                "##       ##      ##      ##\n" <<
                "#Open#   ##      ##      #2022.12.15##\n";
        cout << "Open Lite Systems 2022.12.15\n";
        cout << "Esta copia esta activada.\n";
        cout << "16 bit, CMD Instalado\n";
    } else if(command == "openuefibootsettings") {
        cout << "|   | |-------   |------  |\n" <<
                "|   | |          |        |\n" <<
                "|   | |----      |----    |\n" <<
                "|   | |          |        |\n" <<
                "\\___/ |-------   |        |\n";
        cout << "Put Dev Key: ";
        if(takePasswdFromUser() == "uefli.2022.12.nt") {
            system("CLS");
            cout << ANSI_GREEN_BACKGROUND << " UEFI Boot Settings \n" << ANSI_RESET;
            cout << "Select an option: \n.formt << Format the V: disc\n.dfi << Select a file from internet and download it in a variable.\n.update << Updates the executable file of the OS\n.exi << Exit this screen.\n";
            string comm;
            getline(cin,comm);
            if(comm == ".dfi") {
            } else if(comm == ".update") {
                cout << "this option is not aviable now";
            } else if(comm == ".exi") {
                cout << "Exiting boot.";
            } else if(comm == ".formt") {
                
            } else {
                cout << "This command isn\'t exists";
            }
            cout << "\n";
        }
    } else if(command.substr(0,3) == "nf ") {
        string fileName = command.substr(3);
        files[arrIndex][0] = fileName;
        cout << "Inserte el texto del archivo: \n";
        string fileText;
        getline(cin, fileText);
        files[arrIndex][1] = fileText;
        arrIndex++;
        cout << "Archivo creado.\n";
    } else if(command.substr(0,3) == "rf ") {
        try {
            string fileName = command.substr(3);
            for(int i = 0;i < sizeof(files) / sizeof(string); i++) {
                if(files[i][0] == fileName) {
                    cout << files[i][1] << "\n";
                    break;
                } else if(i == sizeof(files) / sizeof(string)) {
                    cout << "Ese archivo no existe.\n";
                }
            }
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
            system("Pause");
        }
    } else if(command == "V:") {
        cout << "La etiqueta de volumen de esta unidad es: V: (Disco Virtual)\n";
        cout << "Esta unidad puede contener 200 archivos.\nEsta unidad se inicia con UEFI i12\n";
    } else if(command == "dirc") {
        cout << "La ruta de acesso a esta carpeta es: V:/User/Documents\nEsta unidad puede contener 200 archivos\nArchivos:\n";
        
        for(int i = 0;i < sizeof(files) / sizeof(string);i++) {
            if(files[i][0] == "" || files[i][0].empty()) {
                break;
            } else {
            cout << i + 1 << ". " << files[i][0] << "\n";
            }
        }
        
    } else if(command.substr(0,3) == "df ") {
        try {
            string fileName = command.substr(3);
            for(int i = 0;i < sizeof(files) / sizeof(string); i++) {
                if(files[i][0] == fileName) {
                    files[i][0] = "";
                    files[i][1] = "";
                    cout << "Archivo Eliminado\n";
                    break;
                } else if(i == sizeof(files) / sizeof(string)) {
                    cout << "Ese archivo no existe.\n";
                }
            }
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
            system("Pause");
        }
    } else if(command.substr(0,3) == "ef ") {
        try {
            string fileName = command.substr(3);
            for(int i = 0;i < sizeof(files) / sizeof(string); i++) {
                if(files[i][0] == fileName) {
                    cout << "Que texto quieres poner en el archivo? :\n";
                    string text;
                    getline(cin,text);
                    files[i][1] = text;
                    cout << "Archivo editado\n";
                    break;
                } else if(i == sizeof(files) / sizeof(string)) {
                    cout << "Ese archivo no existe.\n";
                }
            }
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
            system("Pause");
        }
    } else if(command == "gameDiceRoller") {
        string dices[6] = {
            "_______________\n"
            "|              |\n"
            "|              |\n"
            "|       +      |\n"
            "|              |\n"
            "|______________|\n",
            "_______________\n"
            "|              |\n"
            "|  +           |\n"
            "|              |\n"
            "|          +   |\n"
            "|______________|\n",
            "_______________\n"
            "|              |\n"
            "|  +           |\n"
            "|      +       |\n"
            "|          +   |\n"
            "|______________|\n",
            "_______________\n"
            "|              |\n"
            "|  +       +   |\n"
            "|              |\n"
            "|  +       +   |\n"
            "|______________|\n",
            "_______________\n"
            "|              |\n"
            "|  +       +   |\n"
            "|      +       |\n"
            "|  +       +   |\n"
            "|______________|\n",
            "_______________\n"
            "|              |\n"
            "|  +       +   |\n"
            "|  +       +   |\n"
            "|  +       +   |\n"
            "|______________|\n"
        };
        cout << "Bienvenido al juego adivina el dado: \n";
        int number = 0;
        while(number < 1 || number > 6) {
            cout << "Inserte un numero mayor que 1 y menos que 6: ";
            cin >> number;
        }
        int num = rand() % 6;
        cout << dices[num - 1] + "\n";
        if(num == number) {
            cout << "Has adivinado el numero!\n";
        } else {
            cout << "Uy, has fallado.\n";
        }
        cout << "\n";
    } else if(command == "calcFileText") {
        string fileName1;
        string fileName2;
        int num1;
        int num2;
        cout << "Inserte el nombre del archivo #1: " << ANSI_BLUE;
        getline(cin,fileName1);
        
            for(int i = 0;i < sizeof(files) / sizeof(string); i++) {
                if(files[i][0] == fileName1) {
                    num1 = stoi(files[i][1]);
                    break;
                } else if(i == sizeof(files) / sizeof(string)) {
                    cout << "Ese archivo no existe.\n";
                }
            }
            cout << ANSI_WHITE << "Inserte el nombre del archivo #2: " << ANSI_BLUE;
        getline(cin,fileName2);
            for(int i = 0;i < sizeof(files) / sizeof(string); i++) {
                if(files[i][0] == fileName2) {
                    num2 = stoi(files[i][1]);
                    break;
                } else if(i == sizeof(files) / sizeof(string)) {
                    cout << "Ese archivo no existe.\n";
                }
            }
            char oper;
                cout << ANSI_WHITE << "Cual operacion quieres hacer?: " << ANSI_BLUE;
                cin >> oper;
            cout << ANSI_WHITE;
            switch (oper) {
            case '+':
                    cout << "El resultado es: " << num1 + num2;
                break;
                case '-':
                    cout << "El resultado es: " << num1 - num2;
                break;
                case '/':
                    cout << "El resultado es: " << num1 / num2;
                break;
                case '*':
                    cout << "El resultado es: " << num1 * num2;
                break;
                case '%':
                    cout << "El resultado es: " << num1 % num2;
                break;
                default:
                    cout << "Esa operacion no se puede hacer";
                    break;
            }
            cout << "\n";
    } else if(command == "LiteNTOfficeVer") {
        cout << "Lite NT Office Workspace C++ i12 x_1.0\n";
        cout << "Esta version incluye: calcFileText\n";
    } else if(command.empty()) {
        cout << "Inserte un comando valido.\n";
    }else{
        cout << "Ese comando no existe.\n";
    }

    }
    while (started);
    } catch(const std::exception& e) {
        system("CLS;");
        system("Color 9F");
        cout << "  --------                   /////\n" <<
                "-----------              /////\n" <<
                "-----------             /////\n" <<
                "  --------             ||||||\n" <<
                "                       ||||||\n" <<
                "  ---------            ||||||\n" <<
                "------------             \\\\\\\\\\\n" <<
                "------------               \\\\\\\\\\\n" <<
                "  ---------                   \\\\\\\\\\";
        cout << "\nCode: " << e.what() << "\n";
        system("Pause");
        system("Color 0F");
        system("CLS");
    }
    
    
    
    

    return 0;
}