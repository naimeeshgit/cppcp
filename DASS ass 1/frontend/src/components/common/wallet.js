import { useState } from "react";
import axios from "axios";
import Grid from "@mui/material/Grid";
import TextField from "@mui/material/TextField";
import Button from "@mui/material/Button";
import InputLabel from '@mui/material/InputLabel';
import MenuItem from '@mui/material/MenuItem';
import FormControl from '@mui/material/FormControl';
import Select from '@mui/material/Select';


const getBalance = (props) => {
    const email = localStorage.getItem('id');

    axios
         .get("http://localhost:4000/buyer/checkbalance")
         .then((response) => {
             return response.data.wallet
         });

}

const [bool, setBool] = useState(true);
  const changeBool = () => {
    setBool(!bool); 
    console.log(bool);
  };


const Register = (props) => {

    const [wallet, setMoney] = useState(0);


    const onAddmoney = (event) => {
        setMoney(event.target.value);
    };

    const onSubmit = (event) => {
        event.preventDefault();
        changeBool();

       
        
        
        axios
            .post("http://localhost:4000/buyer/addmoney", newUser)
            .then((response) => {
                alert("Created\t" + response.data.name);
                console.log(response.data);
            });


    };



    return (
        <Grid container align={"center"} spacing={2}>
            <Grid item xs={12}>
                <TextField
                    label="Balance"
                    variant="outlined"
                    value={getBalance}
                />
            </Grid>

            <Grid item xs={12}>
                <TextField
                    label="Wallet"
                    variant="outlined"
                    value={}
                    disabled = {bool}
                    onChange={onAddmoney}
                />
            </Grid>



            <Grid item xs={12}>
                <Button style={{ marginRight: "16px" }} variant="contained" onClick={onSubmit}>
                    Add Money
                </Button>
                <Button variant="contained" onClick={onSubmit}>
                    Done
                </Button>
            </Grid>
        </Grid>
    );
};

export default Register;



