///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: types.hpp
///
/// Author: $author$
///   Date: 4/9/2015
///////////////////////////////////////////////////////////////////////
#ifndef _MEDUSA_BASE_TYPES_HPP
#define _MEDUSA_BASE_TYPES_HPP

#include "medusa/base/base.hpp"
#if !defined(USE_NADIR_BASE)
//#include "xos/base/types.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/base/chars.hpp"
#endif // !defined(USE_NADIR_BASE)

namespace medusa {

///////////////////////////////////////////////////////////////////////
/// types
///////////////////////////////////////////////////////////////////////
#if !defined(USE_NADIR_BASE)
/*
typedef xos::base::chars_t chars_t;
typedef xos::base::tchars_t tchars_t;
typedef xos::base::wchars_t wchars_t;
typedef xos::base::bytes_t bytes_t;
*/
#else // !defined(USE_NADIR_BASE)
typedef nadir::chars_t chars_t;
typedef nadir::tchars_t tchars_t;
typedef nadir::wchars_t wchars_t;
#endif // !defined(USE_NADIR_BASE)

} // namespace medusa

#endif // _MEDUSA_BASE_TYPES_HPP 
