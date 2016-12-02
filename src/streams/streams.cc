// NOTE: Instead of .c files, C++ uses .cc files
// NOTE: (In some circles, .cpp and .hpp are used, but we are following Google conventions)
//   However, .h extensions are not specified for C++ standard libraries

// iostream: basic io streaming operations (cin, cout, etc.)
#include <iostream>
// string: true string type
#include <string>
// sstream: stringstream, which converts strings to streams 
#include <sstream>
// fstream: filestream, read and write files easily as streams
#include <fstream>

// Just like Python, C++ uses namespaces to organize symbols into logical
// groupings, which helps keep things tidy
// Unlike Python, C++ uses the symbol :: to look inside a namespace
// (Python uses the . symbol, just like for a C/C++ struct)
namespace foo
{
    // std:: denotes the "standard namespace" 
    // cout takes a string as a stream and prints it to stdout
    // endl is the cross-platform stream version of an end-of-line character \n
    void print() { std::cout << "This is printing from foo." << std::endl; }
}

// Multiple namespaces may be defined easily
namespace bar
{
    // This is bar::print, which is distinct from foo::print above
    void print() {
        std::cout << "This is printing from bar." << std::endl;
    }
}

// Exactly like C, a C++ program must have a main function with arguments:
//   argc : int count of commandline arguments
//   argv : array of C-strings, meaning a pointer to an array of char pointers
int main(int argc, char **argv)
{
    // specify that everything in the namespace std should 
    // become available in the local scope for convenience
    // NOTE: This is forbidden the Google style guide, but is included here
    //       for completeness - generally don't do this to keep namespaces clear
    using namespace std;
    
    // Example of command line usage
    if ( argc != 2 ) 
    {
        // The stream operator << automatically converts types
        // so here the C-string (char *) of argv[0] is converted to a 
        // true C++ string, then passed as a stream to cout
        //
        // Note : the std prefix is not needed due to the "using" call above
        cout << "Usage: " << argv[0] << " arg1" << endl;
        return 1;
    }
    cout << "arg1 = " << argv[1] << endl;

    // Functions within distinct namespaces can be called directly
    foo::print();
    bar::print();

    // specify that print from foo:: should be pulled into local scope
    using foo::print;

    // demonstration that the foo:: prefix is no longer needed
    print();

    // define true string variable to hold input
    string input_str;

    // define float and int types to hold parsed input
    float fnum=0;
    int   inum=0;

    // Ask for input from user as a string
    cout << "Enter a float: ";

    // get entire line until a carriage return
    getline(cin, input_str);

    // use streams to parse the string input as different types
    stringstream(input_str) >> fnum;
    stringstream(input_str) >> inum;

    // show result of parsed input
    cout << "Input as a float: " << fnum << endl;
    cout << "Input as an int : " << inum << endl;

    // file handle
    ofstream output_file;

    // open a file
    output_file.open("output_file.txt");

    // check that file opened successfully
    if ( !output_file.is_open() )
    {
        // Print error to standard error (not standard out)
        cerr << "Error: Could not open file" << endl;
    }
    else
    {
        // write to file as a stream
        output_file << "This is the first line of the file." << endl;
        output_file << "Input as a float: " << fnum << '\t'; // \t = tab character
        output_file << "Input as an int : " << inum << endl;
        // explicitly close the file
        // (the file is also closed automatically when the program terminates)
        output_file.close();
    }
    
    // (this is implicit if omitted)
    return 0;
}
