int main(int argc, char const *argv[])
{
   //Variables
   int variableA = 29;
   int variableB =42;

   //Print
   printf("%d\n", variableA);
   printf("%d\n", variableB);

   //Trade
   int VariableT = variableA; 

   variableA = variableB;
   variableB = VariableT;

   //Print
   printf("%d\n", variableA);
   printf("%d\n", variableB);


    return 0;
}
