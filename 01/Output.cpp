#include <iostream>
#include <iomanip> // for std::setw and std::setfill

void sep_begin(void);
void sep_middle(void);
void sep_end(void);
void continue_screen(void);
void scientific_fixed(void);
void boolean_cond(void);
void precision_nbr(void);
void showpoint_nbr(double n1);
void selection(char op);
void number_system(int nbr);
void showpos_nbr(int nbr);
void fillwith(char ltr, int col_width);
void internal_just(int nbr = -10, int col_width = 15);

int main()
{
    sep_begin();

    char op = 'n';
    while(true)
    {

        //Options available
        std::cout << "WELLCOME TO MY PROGRAM TEST" << std::endl;
        std::cout << "1 - Fill with" << std::endl;
        std::cout << "2 - Internal justify" << std::endl;
        std::cout << "3 - Show positive number" << std::endl;
        std::cout << "4 - Number system" << std::endl;
        std::cout << "5 - Boolean Condition" << std::endl;
        std::cout << "6 - Scientific and fixed" << std::endl;
        std::cout << "7 - Precision" << std::endl;
        std::cout << "8 - Show Number" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << std::endl;
        std::cout << "Choose an option: ";
        std::cin >> op;

        /*Error handling*/
        if (op == '0')
        {
            sep_end();
            return (0);
        }
        else if (op >= '0' && op <= '9')
            selection(op);
        else
        {
            std::cout << "Invalid option" << std::endl;
            sep_middle();
        }
        
        continue_screen();
        sep_middle();
    }
    return (0);
}

void selection(char op)
{
    int col_width {15};
    int n = 0;
    char sep = ' ';
    double n1 = 0;
    sep_middle();
    switch (op)
    {
        case '1':
            std::cout << "FILL WITH\n   preenche a tabela com o separador selecionado.\n" << std::endl;
            std::cout << "Select the sep with one char" << std::endl;
            std::cin >> sep;
            fillwith(sep, col_width); //function that show how setw works
            break;
        case '2':
            std::cout << "INTERNAL JUSTIFY\n  justify the negative signal. \n" << std::endl;
            std::cout << "Enter a number negative" << std::endl;
            std::cin >> n;
            if(n < 0)
                internal_just(n, col_width); //function that show how internal justify works
                else
                internal_just(-n, col_width); //function that show how internal justify works    
                break;    
        case '3':
            std::cout << "SHOW POSIYTIVE NUMBER\n   show the signal of positive.\n" << std::endl;
            std::cout << "Enter a number" << std::endl;
            std::cin >> n;
            if(n > 0)
                showpos_nbr(n); //function that show how internal justify works
            else
                showpos_nbr(-n); //function that show how internal justify works    
            break;
        case '4':
            std::cout << "NUMBER SYSTEM\n   show the number in different base.\n" << std::endl;
            std::cout << "Enter a number" << std::endl;
            std::cin >> n;
            number_system(n); //function that show how showbase works
            break;
        case '5':
            std::cout << "BOOLEAN CONDITION\n   show the boolean in true or false.\n" << std::endl;
            boolean_cond(); //function that show how boolalpha works
            break;
        case '6':
            std::cout << "SCIENTIFIC AND FIXED\n   show the number in scientific or fixed.\n" << std::endl;
            scientific_fixed(); //function that show how uppercase works
            break;
        case '7':
            std::cout << "PRECISION\n   show the number with precision.\n" << std::endl;
            precision_nbr(); //function that show how setprecision works
            break;
        case '8':
            std::cout << "SHOW POINT\n   show the number with point.\n" << std::endl;
            std::cout << "Enter a number with comma" << std::endl;
            std::cin >> n1;
            showpoint_nbr(n1); //function that show how showpoint works
            break;
        default:
            break;
    }
    return ;
}

void sep_begin(void)
{
    std::cout << std::setfill('-');
    std::cout << std::endl;
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill('*');
    std::cout << "" << std::setw(30) << "" << "  BEGIN  " << "" << std::setw(30) << "" << std::endl;
    std::cout << std::setfill('-');
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    return ;
}

void sep_middle(void)
{
    std::cout << std::setfill('-');
    std::cout << std::endl;
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill('*');
    std::cout << "" << std::setw(70) << ""<< std::endl;
    std::cout << std::setfill('-');
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    return ;
}

void sep_end(void)
{
    std::cout << std::setfill('-');
    std::cout << std::endl;
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill('*');
    std::cout << "" << std::setw(30) << "" << "    END   " << "" << std::setw(30) << "" << std::endl;
    std::cout << std::setfill('-');
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    return ;
}

void fillwith(char ltr, int col_width)
{
    std::cout << std::endl;
    std::cout << "Table with setw and setfill" << std::endl;
    std::cout << std::endl;
    std::cout << std::left; //Justfy to left
    std::cout << std::setfill(ltr); //Fill with '-'
    std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::endl;
    std::cout << std::setw(col_width) << "Jorge" << std::setw(col_width) << "Gonzalez" << std::endl;
    std::cout << std::setw(col_width) << "Guilherme" << std::setw(col_width) << "Gouveia" << std::endl;
    std::cout << std::setw(col_width) << "Joao" << std::setw(col_width) << "Silva" << std::endl;
    std::cout << std::setw(col_width) << "Pedro" << std::setw(col_width) << "Santos" << std::endl;
    std::cout << std::setfill(' '); //Fill default

    std::cout << std::endl;
    std::cout << "Table without setfill" << std::endl;
    std::cout << std::endl;
    std::cout << std::left; //Justfy to left
    std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::endl;
    std::cout << std::setw(col_width) << "Jorge" << std::setw(col_width) << "Gonzalez" << std::endl;
    std::cout << std::setw(col_width) << "Guilherme" << std::setw(col_width) << "Gouveia" << std::endl;
    std::cout << std::setw(col_width) << "Joao" << std::setw(col_width) << "Silva" << std::endl;
    std::cout << std::setw(col_width) << "Pedro" << std::setw(col_width) << "Santos" << std::endl;
    return ;
}

void internal_just(int nbr, int col_width)
{
    std::cout << std::endl;
    std::cout << "Internal justified" << std::endl;
    std::cout << std::internal; //good for justifying numbers negative 
    std::cout << std::setw(col_width) << "Internal: " << std::setw(col_width) << nbr << std::endl;
    std::cout << std::right;
    std::cout << std::setw(col_width) << "Right: " << std::setw(col_width) << nbr << std::endl;
    return ;
}

void boolean_cond(void)
{
    bool b1 {true};
    bool b2 {false};

    std::cout << std::boolalpha; //show true or false instead of 1 or 0
    std::cout << "Boolean alpha" << std::endl;
    std::cout << "b1 = " << b1 << "\nb2 = " << b2 << std::endl;
    std::cout << std::endl;
    std::cout << std::noboolalpha; //show 1 or 0 instead of true or false
    std::cout << "Boolean noalpha" << std::endl;
    std::cout << "b1 = " << b1 << "\nb2 = " << b2 << std::endl;
    
    return ;
}

void showpos_nbr(int nbr)
{
    std::cout << "SHOW POSITIVE SIGNAL" << std::endl;
    std::cout << std::showpos;
    std::cout << "\n-> " << nbr << "\n-> " << nbr * (-1) << std::endl; 
    std::cout << std::endl;
    std::cout << "NO SHOW POSITIVE SIGNAL" << std::endl;
    std::cout << std::noshowpos;
    std::cout << "\n-> " << nbr << "\n-> " << nbr * (-1) << std::endl;
    return ;
}

void number_system(int nbr)
{
    int nbr2 = nbr * (-1,56);
    double nbr3 = nbr * 1.698563;

    std::cout << "NUMBER SYSTEM" << std::endl;
    std::cout << std::endl;
    //Formats to int number
    std::cout << std::showbase; //show the base of the number
    std::cout << "Decimal: " << std::dec << nbr << std::endl; //decimal
    std::cout << "Hexadecimal: " << std::hex << nbr << std::endl; //hexadecimal
    std::cout << "Octal: " << std::oct << nbr << std::endl; //octal
    std::cout << std::endl;
/*
    //Formats to int number
    std::cout << std::showbase; //show the base of the number
    std::cout << "Decimal: " << std::dec << nbr2 << std::endl; //decimal
    std::cout << "Hexadecimal: " << std::hex << nbr2 << std::endl; //hexadecimal
    std::cout << "Octal: " << std::oct << nbr2 << std::endl; //octal
    std::cout << std::endl;
    //Formats to double number
    std::cout << std::showbase; //show the base of the number
    std::cout << "Decimal: " << std::dec << nbr3 << std::endl; //decimal
    std::cout << "Hexadecimal: " << std::hex << nbr3 << std::endl; //hexadecimal
    std::cout << "Octal: " << std::oct << nbr3 << std::endl; //octal
    std::cout << std::endl;
*/
    return ;
}

void scientific_fixed(void)
{
    double n1 = 3.1415926535897932384626433832795;
    double n2 = 2658.0;
    double n3 = 1.34e-10;

    std::cout << "SCIENTIFIC AND FIXED" << std::endl;
    std::cout << std::endl;
    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 << std::endl;
    std::cout << "Number 3: " << n3 << std::endl;
    std::cout << std::endl;

    std::cout << "Double fixed" << std::endl;
    std::cout << std::fixed;
    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 << std::endl;
    std::cout << "Number 3: " << n3 << std::endl;
    std::cout << std::endl;

    std::cout << "Double scientific" << std::endl;
    std::cout << std::scientific;
    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 << std::endl;
    std::cout << "Number 3: " << n3 << std::endl;
    std::cout << std::endl;

    std::cout << "Double default" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 << std::endl;
    std::cout << "Number 3: " << n3 << std::endl;
    std::cout << std::endl;
    return ;    
}

void precision_nbr(void)
{
    double n1 = 3.1415926535897932384626433832795; //If have mor size than this, the rest will be garbage
    
    std::cout << "PRECISION" << std::endl;
    std::cout << std::endl;
    std::cout << std::left;
    std::cout << std::setw(10) << "Number: " << std::setw(15) << n1 << std::setw(3) << "P: " << std::setw(10) << "DEFAULT" << std::endl;
    std::cout << std::setprecision(3);
    std::cout << std::setw(10) << "Number: " << std::setw(15) << n1 << std::setw(3) << "P: " << std::setw(10) << "3" << std::endl;
    std::cout << std::setprecision(12);
    std::cout << std::setw(10) << "Number: " << std::setw(15) << n1 << std::setw(3) << "P: " << std::setw(10) << "12" << std::endl;
    std::cout << std::endl;

}

void showpoint_nbr(double n1)
{
    std::cout << "NO POINT SHOW" << std::endl;
    std::cout << std::endl;
    std::cout << "Number: " << n1 << std::endl;
    std::cout << std::endl;

    std::cout << "POINT SHOW" << std::endl;
    std::cout << std::endl;
    std::cout << std::showpoint;
    std::cout << "Number: " << n1 << std::endl;
    std::cout << std::endl;

    std::cout << "NO POINT SHOW AGAIN" << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "Number: " << n1 << std::endl;
    std::cout << std::endl;
    return ;    
}

void continue_screen(void)
{
    char c;
    std::cout << std::endl;
    std::cout << "Type something to exit" << std::endl;
    std::cin >> c;
    if (!c)
        return ;
    else
        return ;
}