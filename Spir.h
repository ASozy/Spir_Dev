
/* Прототипы функций */
void Input_nx_ny(int *nx, int *ny); /* Ввод nx и ny */
void Memory_for_A(int nx, int ny, int ***A); /* память для матрицы */
void Initial_state_of_A(int nx, int ny, int **A); /* начальное состояние матрицы */
void PrintResult(int nx, int ny, int **A); /* печать результата */

void Loop(int nx, int ny, int **A); /* решение с циклом */
void Recursion(int nx, int ny, int **A); /* решение с рекурсией */
void Step(int s, int x, int y, int *v, int smax, int **A); /* рекурсивная функция */
void NextXY(int *x, int *y, int *v, int **A); /* подготовка следующего шага */
