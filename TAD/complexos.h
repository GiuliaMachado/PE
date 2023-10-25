//interface
typedef struct {
    double real; 
    double imag;
} complexo; //chamo a struct de complexo

//typedef struct complexo Complexo;
complexo complexo_novo(double real, double imag);
complexo complexo_soma(complexo a, complexo b); //somar dois TADs
double complexo_absoluto(complexo a);

complexo complexo_le();
void complexo_imprime(complexo a);

int complexos_iguais(complexo a, complexo b);
complexo complexo_multiplicacao(complexo a, complexo b);
complexo complexo_conjugado(complexo a);

