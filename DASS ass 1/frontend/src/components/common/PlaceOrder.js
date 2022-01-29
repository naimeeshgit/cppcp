import { useState, useEffect } from "react";
import axios from "axios";
import Paper from "@mui/material/Paper";
import Grid from "@mui/material/Grid";
import TableCell from "@mui/material/TableCell";
import TableHead from "@mui/material/TableHead";
import TableRow from "@mui/material/TableRow";
import Table from "@mui/material/Table";
import TableBody from "@mui/material/TableBody";
import Button from "@mui/material/Button";
import * as React from 'react';
import TextField from '@mui/material/TextField';
import Dialog from '@mui/material/Dialog';
import { useNavigate } from "react-router-dom";


const BuyItemInMenu = () => {

  const onChangeQuantity = (event) => {
    setItem({
      ...item,
      quantity: event.target.value,
    })
  }


const onAddItem = (event) => {
    event.preventDefault();
    temp = localStorage.getItem("order");
    const item = {
       
        VendorEmail: temp.VendorEmail,
        BuyerEmail: temp.BuyerEmail,
        VendorName: temp.shopName,
        FoodName: temp.FoodName,
        Quantity: item.Quantity,
        price: temp.price,
        rating: temp.rating,
        tags: temp.tags,
        addon: temp.addon,
        addonPrice: temp.addonPrice,
      
    };

    console.log(item);

    axios
      .post("http://localhost:4000/BuyerMenu/placeorder", item)
      .then((response) => {
        alert("Added\t" + response.data.FoodName);
        setBool(!bool);

        // console.log("neeche dekh:");
        console.log(response.data);
        window.location.reload();
      });
      window.location.href = "/foodItemV";
  }

 
  const [item, setItem] = useState({
    VendorEmail: '',
    BuyerEmail: '',
    VendorName: '',
    FoodName: '',
    Quantity: '',
    price: '',
    rating: '',
    tags: [''],
  });

  const [bool, setBool] = useState(true);
  const changeBool = () => {
    setBool(!bool);
    console.log(bool);
  };

  console.log(item)

 
  return (
    <div>
    <Grid container align={"center"} spacing={2}>
        <Grid item xs={12}>
          <TextField label="Food Item"
            variant="outlined"
            onChange={onChangeFoodName}
            disabled={bool}
          >
          </TextField>
        </Grid>
        <Grid item xs={12}>
          <TextField
            label="price"
            variant="outlined"
            onChange={onChangePrice}
            disabled={bool}
          />
        </Grid>
        <Grid item xs={12}>
          <TextField
            label="type"
            variant="outlined"
            onChange={onChangetype}
            disabled={bool}
          />
        </Grid>
        <Grid item xs={12}>
          <TextField
            label="tags"
            variant="outlined"
            onChange={onChangetags}
            disabled={bool}
          />
        </Grid>
        <Grid item xs={12}>
          <TextField
            label="addon"
            variant="outlined"
            onChange={onChangeaddon}
            disabled={bool}
          />
        </Grid>
        <Grid item xs={12}>
          <TextField
            label="addon price"
            variant="outlined"
            onChange={onChangeaddonPrice}
            disabled={bool}
          />
        </Grid>
        <Grid item xs={12}>
          <Button variant="contained" onClick={onAddItem}>
            Submit
          </Button>
          <Button onClick={changeBool}>
            Edit
          </Button>
        </Grid>
      </Grid>
  </div>
  );


}

export default BuyItemInMenu;