// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
MatrixChainOrder(int p[])
{
    // length[p] = n + 1
    n = p.length - 1;
    // m[i,j] = Minimum number of scalar multiplications (i.e., cost)
    // needed to compute the matrix A[i]A[i+1]...A[j] = A[i..j]
    // cost is zero when multiplying one matrix
    for (i = 1; i <= n; i++)
        m[i,i] = 0;

    for (L=2; L<=n; L++)   // L is chain length
    {
        for (i=1; i<=n-L+1; i++)
        {
            j = i+L-1;
            m[i,j] = MAXINT;
            for (k=i; k<=j-1; k++)
            {
                // q = cost/scalar multiplications
                q = m[i,k] + m[k+1,j] + p[i-1]*p[k]*p[j];
                if (q < m[i,j])
                {
                    m[i,j] = q;
                    s[i,j]=k;  // s[i,j] = Second auxiliary table that stores k
                    // k      = Index that achieved optimal cost

                }
            }
        }
    }
}
