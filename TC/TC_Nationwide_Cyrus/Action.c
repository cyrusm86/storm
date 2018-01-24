//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("TC_Step01_homepage");
	truclient_step("1", "Navigate to 'http://nationwide.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("TC_Step01_homepage",0);
	lr_start_transaction("TC_Step02_autoinsurance");
	truclient_step("2", "Click on Insurance link", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Auto Insurance link", "snapshot=Action_3.inf");
	lr_end_transaction("TC_Step02_autoinsurance",0);
	lr_start_transaction("TC_Step03_coverage");
	truclient_step("4", "Click on Coverages link", "snapshot=Action_4.inf");
	lr_end_transaction("TC_Step03_coverage",0);
	lr_start_transaction("TC_Step04_discounts");
	truclient_step("5", "Click on Discounts link", "snapshot=Action_5.inf");
	lr_end_transaction("TC_Step04_discounts",0);
	lr_start_transaction("TC_Step05_claims");
	truclient_step("6", "Click on Claims link", "snapshot=Action_6.inf");
	lr_end_transaction("TC_Step05_claims",0);
	lr_start_transaction("TC_Step06_aboutus");
	truclient_step("7", "Click on About Us link", "snapshot=Action_7.inf");
	lr_end_transaction("TC_Step06_aboutus",0);

	return 0;
}
