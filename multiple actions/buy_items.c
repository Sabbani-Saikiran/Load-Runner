buy_items()
{

	lr_think_time(8);

	web_url("Catalog.action;jsessionid=0F1F28474939BBC11486DEC4703484B1", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=0F1F28474939BBC11486DEC4703484B1?viewCategory=&categoryId=BIRDS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='EST-18' Name ='workingItemId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=workingItemId",
		"RegExp=itemId=(.*?)\">EST-18",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_link("AV-CB-01", 
		"Text=AV-CB-01", 
		"Snapshot=t4.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t5.inf", 
		LAST);

	return 0;
}
