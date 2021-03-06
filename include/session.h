#ifndef SESSION_H
#define SESSION_H

#include "tools.h"


class out_t;
class in_t;
class data_t;
class gui_t;
class fms_t;
class mfdpages_t;

class session_t : public tools_t
{
public:
    session_t(void);
    ~session_t(void);
    int enable(void);
    void disable(void);
private:
    out_t* a_out;
    in_t* a_in;
    data_t* a_data;
	gui_t* a_gui;
	fms_t* a_fms;
	mfdpages_t* a_mfdpages;
};

#endif /* SESSION_H */
