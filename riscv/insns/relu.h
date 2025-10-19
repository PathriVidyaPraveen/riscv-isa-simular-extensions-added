require_extension('ML_A');
reg_t rs1_val = RS1;
float val = *(float*)&rs1_val;
val = std::max(0.0f,val);
WRITE_RD(*(reg_t*)&val);
