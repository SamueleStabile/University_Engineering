/* TRACCIA:
 * Mostrare la relazione di ricorrenza che descrive il costo computazionale
 * (in termini di numero di operazioni richieste) del seguente algoritmo,
 * mostrare come calcolare il tempo di esecuzione partendo da tale ricorrenza,
 * ed infine indicare il tempo di esecuzione.
 * Si consideri unicamente il caso pessimo.
 */

int MyFunc(int a[], int n)
{
  if (n == 0)
      return 0;
  if (n == 1)
      return a[0];
  int ret1 = MyFunc(a    , n/2);
  int ret2 = MyFunc(a+n/2, n-n/2);
  return ret1 + ret2;
}


/* SVOLGIMENTO
    T(0) = c0
    T(1) = c1
    T(n) = 2   T(n/2)   +         c2 = 1'livello
           2 [2 T(n/4)] + c2      c2
         = 4   T(n/4)   + 3       c2 = 2'livello
         = …                         =
         = 2^i T(n/2^i) + (2^i-1) c2
    
 Nel caso pessimo: n = 2^i
         = n   T(1)     + (n-1)   c2 =
         = n   c1       + (n-1)   c2
 => T(n) appartiene ad O(n)
*/
