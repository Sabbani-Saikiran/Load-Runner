buyitems()
{

	lr_think_time(5);

	web_url("Catalog.action;jsessionid=CFA31EF75C96D0D7734ABF3D491CA19B", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=CFA31EF75C96D0D7734ABF3D491CA19B?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='EST-1' Name ='workingItemId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=workingItemId",
		"RegExp=itemId=(.*?)\">EST-1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t16.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t17.inf", 
		LAST);

	return 0;
}
