#ifndef _FACE_
#define _FACE_
#include "myvector.h"

class face
{
 public:
  size_t index_vertex[4];  //�����Ķ��������Ǵ�С�������е� 
  myvector normal_ori; //ָ������
  size_t num_hex; //ӵ�����������������Ŀ

  face(){}
  ~face(){}
  face(const size_t (&index_vertex)[4]);
};
#endif
