/* scan_complex from Chapter 10 to scan one complex number
 * is shown with some blanks added. Fill in the blanks
 * to create fscan_complex. 
 * 	fscan_complex takes file pointer argument
 * 		      & complex_t output argument.
 */

int fscan_complex(FILE *inputFile, complex_t *c)
{
	int status;
	status = fscanf(inputFile, "%lf%lf", &c->real, &c->imag);

	if (status == 2)
		status = 1;
	else if (status != EOF)
		status = 0;
	return (status);
}
