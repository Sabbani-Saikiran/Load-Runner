buy_items()
{

	lr_think_time(12);

	web_url("Catalog.action;jsessionid=8E42091D5685C9A42487CB396B76AF01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=8E42091D5685C9A42487CB396B76AF01?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
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
		"Snapshot=t4.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t5.inf", 
		LAST);

	return 0;
}
