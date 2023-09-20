/* TRACCIA:
 * Mostrare la relazione di ricorrenza che descrive il costo computazionale del
 * seguente algoritmo. Mostrare come calcolare il costo computazionale (in
 * termini di numero di operazioni richieste) partendo da tale ricorrenza, ed
 * infine indicare il tempo di esecuzione. Si consideri unicamente il caso
 * pessimo.
*/

int Test(int a[], int n)
{
  if (n <= 1) return 0; //caso base

  int ret = Test(a,n/2); //combina T(n/2)

  for (int j=0; j<n; j++) // + n c2
      ret = ret + a[j];     //c2

  return ret;
}


/* SVOLGIMENTO
 T(1) = c; // caso base
 
 T(n) =   T(n/2)   + n c2             =  [al passo 1]
          [T(n/4) + n/2 c2] + n c2
      =   T(n/4)   + n c2 3/2         =  [al passo 2]
      =   T(n/8)   + n c2 7/4         =  [al passo 3]
      = …                             =
      =   T(n/2^i) + n c2 (2^i-1)/2^(i-1)    [al passo i]
 
 o alternativamente:
 T(n) =   T(n/2)   + n c2                        =  [al passo 1]
      =   T(n/4)   + n c2 (1/2 + 1)              =  [al passo 2]
      =   T(n/8)   + n c2 (1/4 + 1/2 + 1)        =  [al passo 3]
      = …                                        =
      =   T(n/2^i) + n c2 sum_{k=0}^{i-1}(1/2^k)   [al passo i]
      =   T(n/2^i) + n c2 (2^i-1)/2^(i-1)
 Per n = 2^i
 T(n) =   T(1)     + 2 (n-1)/n     n c2 =
      =   c1       + 2 (n-1)         c2
 => T(n) appartiene ad O(n)
 */
