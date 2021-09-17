public  class Main {
    public static void main(String[] args) {
        int tam=100;
        int []vector = new int[tam];
        int [][]vectorDos = {{1,2},{1,2}};
        for(int i=0;i<tam;i++)
        {
            vector[i]=i;
            System.out.println(vector[i]);
        }
        for (int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                System.out.print(vectorDos[i][j]);
            }
            System.out.println();
        }
    }
}
