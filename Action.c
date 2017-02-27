//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("AOS_1_HomePage");
	truclient_step("1", "Navigate to 'advantageonlineshopping.com'", "snapshot=Action_1.inf");
	lr_end_transaction("AOS_1_HomePage",0);
	lr_start_transaction("AOS_2_Speakers");
	truclient_step("2", "Click on SPEAKERS Shop Now", "snapshot=Action_2.inf");
	lr_end_transaction("AOS_2_Speakers",0);
	lr_start_transaction("AOS_3_Roarmini");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_end_transaction("AOS_3_Roarmini",0);
	lr_start_transaction("AOS_4_Yellow");
	truclient_step("4", "Click on YELLOW", "snapshot=Action_4.inf");
	lr_end_transaction("AOS_4_Yellow",0);

	return 0;
}
