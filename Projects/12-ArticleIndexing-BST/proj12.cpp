// proj12.cpp
// Tanmay Gupta
// Reads a file and prints to "YourUserID.txt"

#include <iostream>
#include <string>
#include <fstream> // for opening and writing to the file
using namespace std;


//Data stored in the node type

struct WordCount
{
    string word; // the word
    int count; // the count
};


//Node type:
struct TreeNode
{
    WordCount info;
    TreeNode * left;
    TreeNode * right;
};


// Two function's prototype
// Increments the frequency count if the string is in the tree
// or inserts the string if it is not there.
void Insert(TreeNode*& node, string item)
{
    //creating a new node
    if (node == NULL) // check if node is empty/NULL
    {
        node = new TreeNode;
        node->left = NULL;
        node->right = NULL;
        node->info.word = item;
        node->info.count = 0;
    }
    //check where to include a node
    if (item < node->info.word)
        Insert(node->left, item);
    if (item > node->info.word)
        Insert(node->right, item);
    if (item == node->info.word)
        node->info.count = node->info.count + 1;
}

// Prints the words in the tree and their frequency counts.
void PrintTree(TreeNode* node, ofstream& outfile)
{
    if (node != NULL) // print for a non empty node
    {
        PrintTree(node->left, outfile);
        outfile << node->info.word << " " << node->info.count << "\n"; // printing and spacing out values.
        PrintTree(node->right, outfile);
    }
}

//Start your main function and the definitions of above two functions.



int main()
{
    ifstream inFile;
    ofstream outFile;
    string infilename, outfilename; // file names the user types in
    string mystring;
    TreeNode *root=NULL;

    cout << "Please type the text file name: ";
    cin >> infilename;

    cout << "Please give the output text file name: ";
    cin >> outfilename;


    inFile.open(infilename.c_str()); // open input file
    inFile >> mystring;
    while (inFile)
    {
        if (mystring.length() > 2) // check for length bigger than 2 characters
        {
            Insert(root, mystring); // insert new branches
        }
        inFile >> mystring;
    }
    inFile.close(); // close input file


    outFile.open(outfilename.c_str()); // open output file
    PrintTree(root, outFile); // Print values in output file
    outFile.close(); // close output file

    cout << "\n" << "You are done! You can open the file " << outfilename << " to check.\n";
    cout << "Press any key to continue\n";

    return 0;
}

/*
Sample Output:
_________________________________________________________
Please type the text file name: lincoln.txt
Please give the output text file name: output.txt

You are done! You can open the file output.txt to check.
Press any key to continue
_________________________________________________________
*/
