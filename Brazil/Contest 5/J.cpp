#include <bits/stdc++.h> 
#define n 3 
  
using namespace std; 
  
// Function that return 
// dot product of two vector array. 
double dotProduct(double vect_A[], double vect_B[]) 
{ 
  
    double product = 0; 
  
    // Loop for calculate cot product 
    for (int i = 0; i < n; i++) 
  
        product = product + vect_A[i] * vect_B[i]; 
    return product; 
} 
  
// Function to find 
// cross product of two vector array. 
void crossProduct(long double vect_A[],long  double vect_B[],long double cross_P[]) 
  
{ 
  
    cross_P[0] = vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1]; 
    cross_P[1] = vect_A[0] * vect_B[2] - vect_A[2] * vect_B[0]; 
    cross_P[2] = vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0]; 
} 
void crossProduct(double vect_A[],double vect_B[],double cross_P[]) 
  
{ 
  
    cross_P[0] = vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1]; 
    cross_P[1] = -vect_A[0] * vect_B[2] + vect_A[2] * vect_B[0]; 
    cross_P[2] = vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0]; 
} 
// Driver function 
int main() 
{ 
    int t;
  
    //int vect_A[] = { 3, -5, 4 }; 
    //int vect_B[] = { 2, 6, 5 }; 
    //int cross_P[n];

    
    ifstream cin("jupiter.in");
    
    cin>>t;
    for(int p = 0; p < t; p++){
        double N[3], A[3], B[3], C[3],L, S[3], T[3], Au[3], L1 = 0, L2 = 0, L3 = 0, H, Anorm = 0, Nnorm = 0; 
        cin>>N[0]>>N[1]>>N[2]>>A[0]>>A[1]>>A[2]>>L>>H;
        
        for(int i = 0; i < 3; i++){
            Anorm += A[i]*A[i];
        }
        Anorm = sqrt(Anorm);

        for(int i = 0; i < 3; i++){
            Au[i] = A[i] / Anorm;
            //cout<<Au[i]<<endl;
        }

        double alt = L*sqrt(3)/2;
        for(int i = 0; i < 3; i++)
            S[i] = -A[i]/2;

        //double Nnorm = sqrt(dotProduct(N,N));
        for(int i = 0; i < 3; i++){
            Nnorm += N[i]*N[i];
        }
        Nnorm = sqrt(Nnorm);
        /*
        for(int i = 0; i < 3; i++)
            N[i] /= Nnorm;
*/
        crossProduct(N, S, T);
        for(int i = 0; i < 3; i++){
            B[i] = S[i] - T[i]*sqrt(3)/Nnorm;
            C[i] = S[i] + T[i]*sqrt(3)/Nnorm;
            //cout<<C[i]<<endl;
        }
        //L1 = 0, L2 = 0, L3 = 0;
        L1 = sqrt(A[0]*A[0] + A[1]*A[1] + (A[2] + H)*(A[2] + H));
        L2 = sqrt(B[0]*B[0] + B[1]*B[1] + (B[2] + H)*(B[2] + H));
        L3 = sqrt(C[0]*C[0] + C[1]*C[1] + (C[2] + H)*(C[2] + H));
        /*
        A[2] += H;
        B[2] += H;
        C[2] += H;
        L1 = sqrt(dotProduct(A, A));
        L2 = sqrt(dotProduct(B, B));
        L3 = sqrt(dotProduct(C, C));
            */
        printf("%.6f %.6f %.6f\n", L1, L2, L3);

        //printf("%.6f %.6f %.6f\n", A[0], A[1], A[2]);
        //printf("%.6f %.6f %.6f\n", B[0], B[1], B[2]);
        //printf("%.6f %.6f %.6f\n", C[0], C[1], C[2]);
       // cout<< Anorm <<" fdf" << L*sqrt(3)/3<<endl;
    }
  /*
    // dotProduct function call 
    cout << "Dot product:"; 
    cout << dotProduct(vect_A, vect_B) << endl; 
  
    // crossProduct function call 
    cout << "Cross product:"; 
    crossProduct(vect_A, vect_B, cross_P); 
  
    // Loop that print 
    // cross product of two vector array. 
    for (int i = 0; i < n; i++) 
  
        cout << cross_P[i] << " "; */
    return 0; 
} 
