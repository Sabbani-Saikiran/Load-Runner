Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

/*Correlation comment - Do not change!  Original value='Portland' Name ='fromPort' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=fromPort",
		"RegExp=option\\ value=\"(.*?)\">Portland",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/blazedemo.com/*",
		LAST);

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_submit_form("reserve.php",
		"Snapshot=t123.inf",
		ITEMDATA,
		"Name=fromPort", "Value= {source}", ENDITEM,
		"Name=toPort", "Value={destination}", ENDITEM,
		LAST);

	return 0;
}