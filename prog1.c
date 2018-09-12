#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<getopt.h>

int main (int argc, char *argv[]) {
  pid_t childpid = 0;
  int i, n, k, m, option;
  
  k = 5;  // These values can be changed to whatever for testing. Also, they could be
  m = 5;  //  k = $3 and m = $4 to give define them from the command-line.
  
  if (argc < 2 || arc > 3) {
    fprintf(stderr, "You passed an invalid number of arguments.\n");
    return 1;
  }
  
  while ((option = getopt(argc, argv, "hn:p")) != -1) {
    switch (option) {
      case 'h' :
        printf("You must use one of the following options to use this program:\n");
        printf("1 ./prog1 -h : display help message\n");
        printf("2 ./prog1 -n x : runs the program with x amount of processes\n");
        printf("3 ./prog1 -p : generates a test error message\n");
        break;
      
      case 'n' :
        n = atoi(argv[1]);
  
        for (i = 1; i < n; i++) {
          if (childpid = fork())
            break;
        }
  
        for (i = 1, i < k; i++) {
          fprintf (stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n", 
                   i, (long)getpid(), (long)getppid(), (long)childpid);
          sleep(m);
        }
          
      case 'p' :
        fprintf(stderr, "%s:", argv[0]);
        perror("Error");
        break;
        
      default :
        printf("You must enter the option and a numeric argument.\n");
        printf("Enter './prog1 -h' on the command-line for more help.\n");
    }
  }
  
  return 0;
}
