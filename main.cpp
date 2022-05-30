#include "class_BigNum.cpp"

int main()
{
    srand(time(0));
    BigNum A(7, true), B(1, true), C;
    A.DecOutput(); cout << endl;
    B.DecOutput(); cout << endl;
    C = A % B;
    
    A.DecOutput(); cout << endl;
    C.DecOutput(); cout << endl;
    /*BigNum A(4, true), B(3, true), C;
    //A.HexOutput(); cout << endl;
    //B.HexOutput(); cout << endl;
    A.DecInput("231243248221648379213123213213132");
    B.DecInput("38642578256487359273562438525");
    A.DecOutput(); cout << endl;
    A.DecOutput(); cout << endl;
    C = A * B;
    C.DecOutput();*/
    //8935835315689378868528198677159555345582037686255890472710300
    //8935835315689378868528198677159555345582037686255890472710300
    //8935835315689378868528198677159555345582037686255890472710300
    //8935835315689378868528198677159555345582037686255890472710300
    //B.DecOutput(); cout << endl;
    //C = A * B;
    //C.DecOutput(); cout << endl;
    /*C = C - B;
    C.DecOutput(); cout << endl;
    cout << (A == C);*/
    
    
    
    /*int M = 1000;
    int T = 100000;
    
    int n = rand()%M + 1;
    int m = rand()%m + 1;
    BigNum A(n, true), B(m, true), C, D;
    C = A / B;
    D = A % B;
        
    do{
        //cout << T << " ";
        
    }while(A == C * B + D && A - D == C * B && D < B && --T);
    cout << endl << "T = " << T << endl;*/
    
    
    
    
    /*A.DecInput("34838937602033354752257320550466358591");
    B.DecInput("222222222222");
    C = A / B;
    C.DecOutput(); cout << endl;*/
    /*A.DecOutput(); cout << endl;
    
    B.DecOutput(); cout << endl;
    C = A * B;
    C.DecOutput(); cout << endl;*/
}