Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22bc2c98ba-a7b6-42af-a74b-704257936283%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%22c316fa9a-896a-497a-b46e-67f8471fbe99%22%2C%22initialReferrer%22:null}; DOMAIN=blazedemo.com");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_custom_request("pageviews", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"7beee981-85d0-4446-89e5-8253361559fa\",\"iso_time_full\":\"2024-01-03T10:00:23.698Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:23 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":11},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform\""
		":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\":641,\""
		"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:23.698Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\""
		"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	lr_think_time(10);

	lr_start_transaction("source transaction");

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"1fa689b1-c34e-43e5-9ff6-9cbbb8856dc5\",\"iso_time_full\":\"2024-01-03T10:00:35.907Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:35 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":12,\"time_on_page_ms\":12220},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:35.907Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\""
		"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{"
		"\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\""
		"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":242}}", 
		LAST);

	web_custom_request("changes", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b80f6b85-69a3-4d4d-9e11-f77737dac328\",\"iso_time_full\":\"2024-01-03T10:00:37.289Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:37 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":14,\"time_on_page_ms\":13602},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:37.289Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\""
		"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{"
		"\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\""
		"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":242}}", 
		LAST);

	web_custom_request("clicks_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"303de105-9c56-41b4-9143-fd25b6ba974a\",\"iso_time_full\":\"2024-01-03T10:00:37.296Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:37 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":14,\"time_on_page_ms\":13609},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:37.296Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\""
		"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{"
		"\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\""
		"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":242}}", 
		LAST);

	lr_end_transaction("source transaction",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("destination transaction");

	web_custom_request("clicks_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"11476431-c0da-4422-ba78-2d7bf769e21a\",\"iso_time_full\":\"2024-01-03T10:00:54.339Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:54 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":31,\"time_on_page_ms\":30652},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:54.339Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\""
		",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\""
		"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":342}}", 
		LAST);

	web_custom_request("changes_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"609fe706-02e6-4715-a4f8-1098cfe68f05\",\"iso_time_full\":\"2024-01-03T10:00:55.525Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:55 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":32,\"time_on_page_ms\":31838},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:55.525Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\""
		",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\""
		"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":342}}", 
		LAST);

	lr_end_transaction("destination transaction",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("find flights transaction");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	web_custom_request("clicks_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"906d06c3-6f3a-4ae8-ad46-5d630fbc7437\",\"iso_time_full\":\"2024-01-03T10:00:55.529Z\",\"local_time_full\":\"Wed Jan 03 2024 15:30:55 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":32,\"time_on_page_ms\":31842},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:00:55.529Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\""
		",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\""
		"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":342}}", 
		LAST);

	web_custom_request("clicks_5", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"3fe715e0-4e55-4d52-a5c7-8df0ed71ab7e\",\"iso_time_full\":\"2024-01-03T10:01:11.679Z\",\"local_time_full\":\"Wed Jan 03 2024 15:31:11 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":48,\"time_on_page_ms\":47992},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:01:11.679Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-primary\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"type\":\"submit\",\"class\":\"btn "
		"btn-primary\",\"unique_selector\":\"form > .container > .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"form > .container\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\""
		"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,"
		"\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > div > input\",\"text_content\":null,\"cursor\":\"pointer\",\"x_position\":98,\"y_position\":392}}", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:x8JSIE1Tz0g0hueXxr3y-7gLmltrB-2z_XpZ2eTkSTQ&cup2hreq=3b1560542288ec93c4d601d52f1e4ecd6c3adb6517c48baa8fcfd8a2627dd976", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{4239b260-72a0-40bf-a6e6-c82c01eb574b}\",\"rd\":6211},\"updatecheck\":{},\"version\":\""
		"2024.1.2.1\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{1928f939-a20f-44bd-921c-8af683b10ac2}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0166e76ef6d70642ac15d03b01fb21682c1477ca1c09b255276a3787c5caf846\"}]},\"ping\":{\"ping_freshness\":\"{7003503a-3db7-47f9-b336-09e50d220edb}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"8462\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{f9ebe8b3-ce3a-45b0-8f5b-f0bbb911c5c2}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\""
		":\"{1c97fa9a-f046-4ac8-aae2-4f1dfc418432}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{c6ef4d89-8617-4f90-bbf2-0b82af5793e0}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand"
		"\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{6e7df98b-d29f-4ae7-89cf-a05e73771162}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{db9037fb-e693-4512-b3b6-75159eae2ec8}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f/23ml/23mr:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{f318d1ed-9a07-4dff-a438-8db694cccdce}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.50a410468d64fd55a0fc41dd22d574883f13386eb147b0b5b96ee66c118d4d6e\"}]},\"ping\":{\"ping_freshness\":\"{360a3d5e-1abf-4d2c-b707-3218df6da2b4}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\""
		"ping\":{\"ping_freshness\":\"{9a91271e-139d-48d5-984d-578187846598}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{2790421c-be09-4951-b053-18c85db875cd}\",\"rd\":6211"
		"},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable32\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3a1f460a-a2b2-4896-a4be-0f4587f6b19a}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{bfbcdb65-7ec8-40cd-85e0-54f71ac0e23e}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{aafef211-ba3d-4473-bbee-90c028dc85c5}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"en-US\",\"packages\""
		":{\"package\":[{\"fp\":\"1.852751097103a93a2a6941715bb685a83b7b050a542790a382b7b62eff03a867\"}]},\"ping\":{\"ping_freshness\":\"{6a3cbe14-fec3-45e9-ac1b-3c44e6ade547}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2023.12.26.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{bc74dc9d-6a57-47f0-a6a5-287d58d31e30}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:25i9@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23d23205a85fd30aa8d58030843cbf59c8700f1b60aaf1c5e058e574b3876c7d\"}]},\""
		"ping\":{\"ping_freshness\":\"{384ac43a-effe-4511-a4de-b1d54aa2ad9f}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"427\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{35259957-7cea-44de-a3d7-9dc4fa74097a}\",\"rd\":6211},\"updatecheck\":{"
		"},\"version\":\"1.3.36.311\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9638eb258b056dff2129ae34b37d2a107e600cafb66e430f501b163e421ac1aa\"}]},\"ping\":{\"ping_freshness\":\"{c59fb1f8-4c0c-4d81-8ed1-e1d1c7c1667a}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"817\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ae46d431f381538b0fac6d9fc4ddd1c83253f4d720aff5bbb342cbd1da3c01a2\"}]},\"ping\":{\"ping_freshness\":\"{8b98d7c7-e9a4-4654-8a6d-40f082289e43}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2023.12.20.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort."
		"\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ec1a923ba7c88a440d296dc34f14c484a4e4c5168848c3edf68f0bd13169c351\"}]},\"ping\":{\"ping_freshness\":\"{093919e3-5a1d-44b8-b59f-0ca45af2085e}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2024.1.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true"
		",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3693\"},\"prodversion\":\"120.0.6099.130\",\"protocol\":\"3.1\",\"requestid\":\"{5cbf2ca1-3a3c-4b0b-9076-b1de1957624c}\",\"sessionid\":\"{aa3032a0-7f1e-4cff-a3f6-843783f34bdb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.130\"}}", 
		LAST);

	lr_end_transaction("find flights transaction",LR_AUTO);

	lr_start_transaction("choose the flight transaction");

	web_add_cookie("keen={%22uuid%22:%22c316fa9a-896a-497a-b46e-67f8471fbe99%22%2C%22initialReferrer%22:%22https://blazedemo.com/%22}; DOMAIN=blazedemo.com");

	lr_think_time(16);

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=43", ENDITEM, 
		"Name=price", "Value=472.56", ENDITEM, 
		"Name=airline", "Value=Virgin America", ENDITEM, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	web_custom_request("pageunloads", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"877b05a2-ef4e-4104-92b3-9c128b6cf671\",\"iso_time_full\":\"2024-01-03T10:01:11.935Z\",\"local_time_full\":\"Wed Jan 03 2024 15:31:11 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"bc2c98ba-a7b6-42af-a74b-704257936283\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"414ad297-41b4-42ad-9576-21cc6a7d1388\",\"tracker_loaded_at\":\"2024-01-03T10:00:23.687Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"c316fa9a-896a-497a-b46e-67f8471fbe99\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":48,\"time_on_page_ms\":48248},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\"scrollHeight\""
		":641,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-03T10:01:11.936Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\""
		"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASWAlgdZD1gGcJJRIFDR87IvsSBQ2U1FseEgUNRmcVfRIFDfKo5J0SBQ2gOKZlEgUN6vDYJxIFDYbgKPASBQ14tFrJEgUNUk1bIRIFDdGFyLghOjPq5EZxRW4=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("choose the flight transaction",LR_AUTO);

	lr_start_transaction("details filling transaction");

	return 0;
}