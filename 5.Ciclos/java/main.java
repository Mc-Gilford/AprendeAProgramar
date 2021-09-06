public  class Main {
    public static void main(String[] args) {
        int i=0;
        // Uso con FOR
        System.out.print("For con variable creada\n");
        for (i=1;i<=10;i++){
            System.out.print(i+" ");
        }
        System.out.print("\n");
        System.out.print("For con creacion de variable\n");
        for(int j=1;j<=10;j++){
            System.out.print(j+" ");
        }
        System.out.print("\n");
        System.out.print("While\n");
        i=1;
        while(i<=10){
            System.out.print(i+" ");
            i++;
        }
        System.out.print("\n");
        
        System.out.print("Do While\n");
        i = 1;
        do{
            System.out.print(i+" ");
            i++;
        }while(i<=10);
        System.out.print("\n");
    }
}
