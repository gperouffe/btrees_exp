#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int Mmax = atoi(argv[1]);
    int nOps = atoi(argv[2]);
    
    ofstream out("manyBT.cc");
    out << "#include \"btree_set.h\"" << endl;
    out << "#include <iomanip>" << endl;
    out << "#include <iostream>" << endl;
    out << "#include <time.h>" << endl;
    out << "using namespace std;" << endl;
    
    for(int i = 16; i <= Mmax; i*=2)
        out << "typedef btree::btree_set<long,less<long>,allocator<long>," << i << "> BT" << i << ";" << endl;
        
    out << "int main(int argc, char* argv[]){" << endl;
    out << "    clock_t t;" << endl;
    out << "    srand(time(NULL)*4);" << endl;
    out << "    cout << \"Number of operations: \" << " << nOps << " << endl;" << endl;
    out << "    cout << setw(8) << \"M,\" << setw(11) << \"Insert,\" << setw(11) << \"Find,\" << setw(11) << \"Delete,\" << endl;" << endl;
    
    for(int i = 16; i <= Mmax; i*=2)
    {
        out << "    cout << setw(8) << \"" << i << ",\";" << endl;
        out << "    BT" << i << " bt" << i << ";" << endl;
        for(int k = 0; k < 3; ++k)
        {
            
            out << "    t = clock();" << endl;
            out << "    for(long i = 0; i < " << nOps << "; ++i)" << endl;
            if(k == 0)
                out << "        bt" << i << ".insert(rand());" << endl;
            if(k == 1)
                out << "        bt" << i << ".find(rand());" << endl;
            if(k == 2)
                out << "        bt" << i << ".erase(rand());" << endl;
            out << "    cout << setw(11) << (float)(clock() - t)/CLOCKS_PER_SEC << \", \";" << endl;
        }
        out << "cout << endl;" << endl;
    }
    
    out << "    cout << endl;" << endl;
    out << "}" << endl;
    
    out << flush;
    cout << "Compiling" << endl;
    system("g++ -std=c++11 manyBT.cc -o manyBT");
    cout << "Running" << endl;
    system("./manyBT");
}
