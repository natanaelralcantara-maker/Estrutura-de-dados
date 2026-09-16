typedef struct ponto Ponto;
Ponto * cria_pto(int x, int y);
void libera_pto(Ponto **p);
int distancia_pto(Ponto *p1, Ponto *p2);
