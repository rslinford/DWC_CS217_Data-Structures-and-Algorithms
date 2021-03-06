/*! \file sortedlist.cpp
 * \brief Definitions for class container::SortedList
 *
 * \section svn Source Control
 *
 *  $URL: http://tablet-001/svn/DWC/CS217/trunk/Structures/sortedlist.cpp $
 *  $Date: 2009-06-10 21:54:03 -0400 (Wed, 10 Jun 2009) $
 *  $Author: slinford $
 *  $Revision: 385 $
 *
 * \section original File Creation
 * <pre>
 *   Original file name: sortedlist.cpp
 *   File creator:       slinford
 *   Created on:         March 30, 2009, 11:45 PM
 * </pre>
 * \section course Course Information
 * <pre>
 *   CS-217 Data Structures and Algorithms I
 *   Daniel Webster College - Nashua
 *   03/18/2009 - 05/05/2009
 *   Independent Study
 *
 * Instructor: Robert Schaefer
 *
 * Description:
 *
 *   Students will be responsible for the specification, design,
 *   implementation and practical demonstration of correctness of the
 *   abstract data type sets, functions, sequences, stacks, queues, and
 *   strings. Special emphasis will be given to searching and sorting
 *   algorithms. Other algorithms covered may include compression,
 *   encryption, hashing, and sorting, and sampling.
 *
 * Student:
 *
 *   R. Scott Linford
 * </pre>
 */

#include "sortedlist.h"

namespace container {

const Object::Info* const SortedList::TYPE_INFO = Object::typeInfoFactory("SortedList");

SortedList::SortedList() { }

SortedList::SortedList(const SortedList& orig) { }

SortedList::~SortedList() { }

/*********************  SortedList Methods (public) *********************/

bool SortedList::insertSorted(Entity* entity) {
   if (insertSorted_impl(entity)) {
      incCount();
      return true;
   }

   return false;
}

/*********************  Object Methods (public) *********************/

ostream & SortedList::renderState(ostream& os) const {
   return this->List::renderState(os);
}

const Object::Info* SortedList::typeInfo() const {
   return TYPE_INFO;
}

} // namespace container
