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
