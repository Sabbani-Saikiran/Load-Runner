Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	lr_think_time(13);

	lr_start_transaction("source transaction");

	lr_end_transaction("source transaction",LR_AUTO);

	lr_start_transaction("destination transaction");

	lr_end_transaction("destination transaction",LR_AUTO);

	lr_start_transaction("find flights transaction");

	web_submit_form("reserve.php", 
		"Snapshot=t48.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	lr_end_transaction("find flights transaction",LR_AUTO);

	lr_start_transaction("choose this flight transaction");

	return 0;
}