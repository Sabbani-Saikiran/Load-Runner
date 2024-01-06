# 1 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2




 
 



# 3 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("https://blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "ENDITEM", 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", "ENDITEM", 
		"LAST");

	lr_start_transaction("source_transaction");

	lr_end_transaction("source_transaction",2);

	lr_start_transaction("destination_transaction");

	lr_end_transaction("destination_transaction",2);

	lr_start_transaction("find flights_transaction");

	web_submit_form("reserve.php", 
		"Snapshot=t7.inf", 
		"ITEMDATA", 
		"Name=fromPort", "Value=Boston", "ENDITEM", 
		"Name=toPort", "Value=Rome", "ENDITEM", 
		"LAST");

	lr_end_transaction("find flights_transaction",2);

	lr_think_time(108);

	lr_start_transaction("choose this flight_transaction");

	web_submit_form("purchase.php", 
		"Ordinal=1", 
		"Snapshot=t8.inf", 
		"ITEMDATA", 
		"LAST");

	lr_think_time(93);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:vZpRZ044HKBYkIROIgkRvEWOGBBK08eJroWbP4OgteQ&cup2hreq=942b6c21c3da78f2cb603bbaae5e014cd5aae1dc838ad70bbd9a32f2f292f416", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{edfcfc1f-a3e8-4a39-ad78-6553e6ad24c5}\",\"rd\":6211},\"updatecheck\":{},\"version\":\""
		"1.3.36.311\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{8fbe43d2-1f8b-49f5-82ee-e9016d8a3289}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{757a2ef6-3bc0-4d27-b07e-8e82ce69d25a}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\","
		"\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{662f230b-7602-46e2-ac5d-7d75ac4a9432}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.50a410468d64fd55a0fc41dd22d574883f13386eb147b0b5b96ee66c118d4d6e\"}]},\"ping\":{\"ping_freshness\":\"{315e4e70-39e0-4748-8017-cf0563c302b6}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:25i9@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23d23205a85fd30aa8d58030843cbf59c8700f1b60aaf1c5e058e574b3876c7d\"}"
		"]},\"ping\":{\"ping_freshness\":\"{cf53adfe-b275-46ee-a239-e4e406a8a621}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"427\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{97f142b6-8dc9-440d-9c5b-43d129b9a664}\",\"rd\":6211},\""
		"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{533f0bc9-3146-472b-bad8-4050cf4bc240}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{2a03f075-dcb4-42aa-8372-00acccf53d4b}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{900c11e1-5769-4bea-9eb3-0e4e9280b0cf}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{690dc36c-d874-4073-9fd7-6fbefd22592a}\",\"rd\":6211},\"updatecheck\":{},\""
		"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable32\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{0c693cb2-2d74-4c58-9513-58c5255c87b7}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9638eb258b056dff2129ae34b37d2a107e600cafb66e430f501b163e421ac1aa\"}]},\"ping\":{\"ping_freshness\":\"{2bef9ee8-0c59-45e3-97eb-d0aa85de9990}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"817\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\""
		":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{384261d0-090d-41b2-941b-b63e8d6064ea}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f/23ml/23mr:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"en-US\",\"packages"
		"\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{608dbd5b-5ac1-4c48-a2da-d0e364c1c10b}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{52e86663-c8df-48a0-9d3e-e4635f139286}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":"
		"{\"ping_freshness\":\"{e1bbae75-540f-46c1-9e9e-21a6e692e963}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.27eea7f9103464afe70f767435f76ba57ec36b60f896fcedf160aaac2a2e4b3e\"}]},\"ping\":{\"ping_freshness\":\"{94c827d3-0613-4996-9741-859113cd2f14}\",\"rd\":6211},\"updatecheck\":{},\""
		"version\":\"2024.1.3.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{8d237574-64e4-451c-9075-63ade1b41bc2}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand"
		"\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a9fbbcc7e0d271f500a5d7dacd0808afd6ac381cb5c2b7150081a9ebb5f9c7aa\"}]},\"ping\":{\"ping_freshness\":\"{d2879b5d-ed63-4fb4-8fa6-56a98fbc93b0}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"8463\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:25p3@0.025\",\"cohorthint\":\"General release\",\"cohortname\""
		":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ae46d431f381538b0fac6d9fc4ddd1c83253f4d720aff5bbb342cbd1da3c01a2\"}]},\"ping\":{\"ping_freshness\":\"{a6536a2b-e869-42da-ab97-c2e36510cf51}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2023.12.20.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-US\",\"packages\":{\"package\":[{"
		"\"fp\":\"1.b052dcc90b2eb5b223c5a6b63591cddb4c5e470ccdd968201e779dc2995c84eb\"}]},\"ping\":{\"ping_freshness\":\"{c0b5cfc2-57cf-418b-8322-36b29f2dd624}\",\"rd\":6211},\"updatecheck\":{},\"version\":\"2024.1.3.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3693\"},\"prodversion\":\"120.0.6099.130\",\"protocol\":\"3.1\",\"requestid\":\"{e0fdb07a-a179-4f7f-9470-248d0f036b72}\",\"sessionid\":\"{db3e2d7e-9a32-45e2-b052-b28b041ddae7}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.130\"}}", 
		"LAST");

	lr_end_transaction("choose this flight_transaction",2);

	lr_think_time(23);

	lr_start_transaction("details_transaction");

	web_custom_request("pageviews", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"a8b17b3c-0210-496a-ba1b-af9b04fd151f\",\"iso_time_full\":\"2024-01-04T03:06:34.884Z\",\"local_time_full\":\"Thu Jan 04 2024 08:36:34 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":0.55,\"ratio_max\":0.55},\"time_on_page\":0,\"time_on_page_ms\":4},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:06:34.885Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		"LAST");

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"d87ce316-f731-4aed-8338-a6b11c0cfb37\",\"iso_time_full\":\"2024-01-04T03:06:56.681Z\",\"local_time_full\":\"Thu Jan 04 2024 08:36:56 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":0.55,\"ratio_max\":0.55},\"time_on_page\":22,\"time_on_page_ms\":21801},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:06:56.681Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\""
		":null,\"id\":\"inputName\",\"name\":\"inputName\",\"all_attrs\":{\"id\":\"inputName\",\"placeholder\":\"First Last\",\"name\":\"inputName\",\"type\":\"text\",\"unique_selector\":\"#inputName\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(2) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\""
		"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\""
		"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\""
		":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(0) > div > input#inputName\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":90,\"y_position\":359}}", 
		"LAST");

	lr_think_time(7);

	web_custom_request("clicks_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b29cce37-f8bc-4bfc-9bc8-a3dd7263823b\",\"iso_time_full\":\"2024-01-04T03:06:58.326Z\",\"local_time_full\":\"Thu Jan 04 2024 08:36:58 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":0.55,\"ratio_max\":0.55},\"time_on_page\":23,\"time_on_page_ms\":23446},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:06:58.326Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\""
		":null,\"id\":\"address\",\"name\":\"address\",\"all_attrs\":{\"type\":\"text\",\"name\":\"address\",\"id\":\"address\",\"placeholder\":\"123 Main St.\",\"unique_selector\":\"#address\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(3) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\""
		":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\""
		"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\""
		":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(1) > div > input#address\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":90,\"y_position\":434}}", 
		"LAST");

	lr_end_transaction("details_transaction",2);

	web_custom_request("changes", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"1af2097a-51aa-4dd7-8be0-d5f64ac4548d\",\"iso_time_full\":\"2024-01-04T03:06:59.144Z\",\"local_time_full\":\"Thu Jan 04 2024 08:36:59 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":641,\"pixel_max\":641,\"ratio\":0.55,\"ratio_max\":0.55},\"time_on_page\":24,\"time_on_page_ms\":24264},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:06:59.144Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\""
		":null,\"id\":\"address\",\"name\":\"address\",\"all_attrs\":{\"type\":\"text\",\"name\":\"address\",\"id\":\"address\",\"placeholder\":\"123 Main St.\",\"unique_selector\":\"#address\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(3) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\""
		":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\""
		"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\""
		":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(1) > div > input#address\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":90,\"y_position\":434}}", 
		"LAST");

	web_custom_request("clicks_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"bbcc112f-c133-4555-865c-6138ec685e6d\",\"iso_time_full\":\"2024-01-04T03:07:00.159Z\",\"local_time_full\":\"Thu Jan 04 2024 08:37:00 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":841,\"pixel_max\":841,\"ratio\":0.72,\"ratio_max\":0.72},\"time_on_page\":25,\"time_on_page_ms\":25279},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:07:00.159Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\""
		":null,\"id\":\"city\",\"name\":\"city\",\"all_attrs\":{\"type\":\"text\",\"name\":\"city\",\"id\":\"city\",\"placeholder\":\"Anytown\",\"unique_selector\":\"#city\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(4) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\""
		"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\""
		"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY"
		"\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(2) > div > input#city\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":90,\"y_position\":509}}", 
		"LAST");

	web_custom_request("changes_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b321d494-f996-4f18-91e6-d6256543a5d7\",\"iso_time_full\":\"2024-01-04T03:07:00.673Z\",\"local_time_full\":\"Thu Jan 04 2024 08:37:00 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"d46ba064-2832-45a4-b9ce-6fd23684f31f\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f58340dc-32d7-46a6-848c-d98eb11601b7\",\"tracker_loaded_at\":\"2024-01-04T03:06:34.880Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"389def4c-58fb-4490-8305-7be8bb16a62d\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":841,\"pixel_max\":841,\"ratio\":0.72,\"ratio_max\":0.72},\"time_on_page\":26,\"time_on_page_ms\":25793},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"version\":\"5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\",\"screen\":{\"height\":768,\"width\":1366,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":728,\"availWidth\":1366,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":641,\"width\":1366,\""
		"scrollHeight\":1164,\"ratio\":{\"height\":0.88,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/reserve.php\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2024-01-04T03:07:00.674Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\""
		"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\""
		":null,\"id\":\"city\",\"name\":\"city\",\"all_attrs\":{\"type\":\"text\",\"name\":\"city\",\"id\":\"city\",\"placeholder\":\"Anytown\",\"unique_selector\":\"#city\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(4) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\""
		"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\""
		"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY"
		"\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(2) > div > input#city\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":90,\"y_position\":509}}", 
		"LAST");

	lr_start_transaction("purchase_transaction");

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22d46ba064-2832-45a4-b9ce-6fd23684f31f%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%22389def4c-58fb-4490-8305-7be8bb16a62d%22%2C%22initialReferrer%22:%22https://blazedemo.com/reserve.php%22}; DOMAIN=blazedemo.com");

	web_submit_data("confirmation.php", 
		"Action=https://blazedemo.com/confirmation.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/purchase.php", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=_token", "Value=", "ENDITEM", 
		"Name=inputName", "Value=cgvjqdkjsdn", "ENDITEM", 
		"Name=address", "Value=ssdbcjhsdbcjk", "ENDITEM", 
		"Name=city", "Value=cjbsjcn", "ENDITEM", 
		"Name=state", "Value=nsckjsnk", "ENDITEM", 
		"Name=zipCode", "Value=", "ENDITEM", 
		"Name=cardType", "Value=visa", "ENDITEM", 
		"Name=creditCardNumber", "Value=12345", "ENDITEM", 
		"Name=creditCardMonth", "Value=11", "ENDITEM", 
		"Name=creditCardYear", "Value=2017", "ENDITEM", 
		"Name=nameOnCard", "Value=saikiran", "ENDITEM", 
		"LAST");

	lr_end_transaction("purchase_transaction",2);

	return 0;
}
# 5 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\sai\\onedrive\\documents\\vugen\\scripts\\blazedemo transaction\\\\combined_blazedemo transaction.c" 2

