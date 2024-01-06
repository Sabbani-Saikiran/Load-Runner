buyitems()
{

	lr_think_time(5);

	web_url("Catalog.action;jsessionid=0437931C5CB621689650C6BA3B764183", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=0437931C5CB621689650C6BA3B764183?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t6.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2gh3cZDcNVS_yMSGQkjZ-_jGnPyeBIFDXK71t8h3cZDcNVS_yM=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
