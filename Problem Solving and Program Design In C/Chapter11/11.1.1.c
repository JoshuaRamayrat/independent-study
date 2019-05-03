
UNFINISHED

/* Indicate the contents of these variables after each 
 * of the following input operations is performed. Assume
 * that the file accessed by indatap consists of the data
 * given and that each lettered group of operations occurs
 * at the beginning of a program, immediately following
 * a statement that opens the file
 */

double 	x;
int 	n;
char 	ch, str[40];

// 123 3.145 xyz<newline>35 z<newline>

//a
fscanf(indatap, "%d%lf%s%c:, &n, &x, str, &ch);
