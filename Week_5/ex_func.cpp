//Example #3/14/23

String EvaluateSalaryAndReturnName(Employee e)
{
	if (e.Title() == "CEO" || e.Salary() > 100000)
	{
		cout << e.First() << " " << e.Last() << " is overpaid" << endl;
	}

	return e.First() + " " + e.Last();
}
